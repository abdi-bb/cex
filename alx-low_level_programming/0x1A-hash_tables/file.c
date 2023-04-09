/*
What is a hash table?
A hash table is a data structure that allows for efficient insertion, deletion, and retrieval of key-value pairs. It works by mapping keys to indices in an array using a hash function. The hash function takes in a key as input and produces an integer index as output, which is used to access the corresponding value in the array.

How do hash functions work?
Hash functions are designed to convert a key into an integer value that can be used as an index in the hash table's array. The hash function should be deterministic, meaning that for a given key, it should always produce the same output. It should also try to distribute the keys evenly across the array, to avoid collisions (more on that later).
There are many different ways to implement a hash function, but one common approach is to use a formula like this:
*/

hash(key) = (a * key + b) % m

/*
where a and b are constants chosen randomly, m is the size of the hash table's array, and % represents the modulo operator. This formula produces a hash value that is guaranteed to be within the range of 0 to m-1.
What are collisions?
A collision occurs when two different keys produce the same hash value, and therefore map to the same index in the hash table's array. Collisions can lead to incorrect results when searching for a key, since there may be multiple values stored at the same index.
There are several ways to handle collisions in a hash table, including:

Open addressing: In this approach, when a collision occurs, we look for the next available index in the array (starting from the original index) and store the key-value pair there instead. This can be done using techniques like linear probing (checking each subsequent index in order) or quadratic probing (checking indices in a quadratic sequence).
Separate chaining: In this approach, we store multiple key-value pairs at each index in the array, using a linked list or another data structure. When a collision occurs, we simply add the new key-value pair to the list at the corresponding index.
Robin Hood hashing: In this approach, we store each key-value pair along with its "distance" from its ideal index (i.e. the number of steps it would take to get there without any collisions). When a collision occurs, we compare the distances of the two colliding key-value pairs, and keep the one with the smaller distance. This helps to keep the hash table more evenly distributed and reduces the likelihood of long chains forming.

How do we implement a hash table in C?
To implement a hash table in C, we need to define a struct to represent each key-value pair, as well as another struct to represent the hash table itself. Here's an example:
*/
typedef struct {
    char* key;
    int value;
} Entry;

typedef struct {
    int size;
    int count;
    Entry** entries;
} HashTable;

/*
The Entry struct represents a single key-value pair, where the key field is a string and the value field is an integer. The HashTable struct represents the hash table itself, where the size field is the size of the array, the count field is the number of key-value pairs currently stored, and the entries field is a pointer to an array of pointers to Entry structs.
We can then define functions to create a new hash table, add a new key-value pair, retrieve the value for a given key, and delete a

How do we implement a hash function in C?
To implement a hash function in C, we can use a simple algorithm that takes the key as input and produces an integer index as output. Here's an example of a hash function that uses the djb2 algorithm:
*/
unsigned long hash(const char* str) {
    unsigned long hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c;
    }

    return hash;
}
/*
This function takes a string as input and produces a hash value as output. It initializes the hash value to a constant (5381) and then iterates over each character in the string, updating the hash value using a simple formula. The final hash value is returned as an unsigned long integer.
How do we handle collisions in C hash tables?
To handle collisions in C hash tables, we can use the separate chaining approach. We can store each key-value pair at the index in the array corresponding to its hash value, and use a linked list to handle collisions. Here's an example of a HashTable struct that uses this approach:
*/
typedef struct Entry {
    char* key;
    int value;
    struct Entry* next;
} Entry;

typedef struct {
    int size;
    int count;
    Entry** entries;
} HashTable;

/*
In this implementation, the Entry struct includes a next field that points to the next entry in the linked list (if there is one). The HashTable struct includes a pointer to an array of pointers to Entry structs.
How do we add a new key-value pair to a C hash table?
To add a new key-value pair to a C hash table, we can follow these steps:

Calculate the hash value for the key using the hash function.
Find the index in the hash table's array corresponding to the hash value.
Check if there is already an entry at that index. If there is, traverse the linked list until we reach the end and add a new entry there. If there isn't, create a new entry at that index.
Set the key and value fields of the new entry to the input values.

Here's an example implementation of the put function for a C hash table:
*/
void put(HashTable* table, const char* key, int value) {
    unsigned long index = hash(key) % table->size;

    Entry* entry = table->entries[index];
    while (entry) {
        if (strcmp(entry->key, key) == 0) {
            entry->value = value;
            return;
        }
        entry = entry->next;
    }

    Entry* newEntry = malloc(sizeof(Entry));
    newEntry->key = strdup(key);
    newEntry->value = value;
    newEntry->next = table->entries[index];
    table->entries[index] = newEntry;

    table->count++;
}

/*
This function takes a HashTable pointer, a key string, and a value integer as input. It calculates the hash value for the key using the hash function, then finds the index in the hash table's array corresponding to that hash value. It then checks if there is already an entry at that index by traversing the linked list. If it finds an entry with the same key, it updates its value and returns. Otherwise, it creates a new entry and adds it to the linked list at that index, updating the count field of the hash table.

**How do we retrieve a value
Calculate the hash value for the key using the hash function.
Find the index in the hash table's array corresponding to the hash value.
Traverse the linked list at that index until we find an entry with the same key. If we don't find one, the key is not in the hash table.
Return the value associated with the key in the found entry.

Here's an example implementation of the get function for a C hash table:
*/
int get(HashTable* table, const char* key) {
    unsigned long index = hash(key) % table->size;

    Entry* entry = table->entries[index];
    while (entry) {
        if (strcmp(entry->key, key) == 0) {
            return entry->value;
        }
        entry = entry->next;
    }

    return -1;
}
/*
This function takes a HashTable pointer and a key string as input. It calculates the hash value for the key using the hash function, then finds the index in the hash table's array corresponding to that hash value. It then traverses the linked list at that index until it finds an entry with the same key. If it finds one, it returns the value associated with that key. Otherwise, it returns -1 to indicate that the key is not in the hash table.
How do we remove a key-value pair from a C hash table?
To remove a key-value pair from a C hash table, we can follow these steps:
Calculate the hash value for the key using the hash function.
Find the index in the hash table's array corresponding to the hash value.
Traverse the linked list at that index until we find an entry with the same key. If we don't find one, the key is not in the hash table.
Remove the found entry from the linked list by updating the next field of the previous entry (or the hash table's array if the found entry is the first in the linked list).
Free the memory allocated for the removed entry.
Update the count field of the hash table.

Here's an example implementation of the remove function for a C hash table:
*/

void remove(HashTable* table, const char* key) {
    unsigned long index = hash(key) % table->size;

    Entry* entry = table->entries[index];
    Entry* prevEntry = NULL;

    while (entry) {
        if (strcmp(entry->key, key) == 0) {
            if (prevEntry) {
                prevEntry->next = entry->next;
            } else {
                table->entries[index] = entry->next;
            }
            free(entry);
            table->count--;
            return;
        }
        prevEntry = entry;
        entry = entry->next;
    }
}

/*
This function takes a HashTable pointer and a key string as input. It calculates the hash value for the key using the hash function, then finds the index in the hash table's array corresponding to that hash value. It then traverses the linked list at that index until it finds an entry with the same key. If it finds one, it removes the entry from the linked list by updating the next field of the previous entry (or the hash table's array if the found entry is the first in the linked list). It then frees the memory allocated for the removed entry and updates the count field of the hash table.
What are some considerations when working with C hash tables?
When working with C hash tables, there are a few considerations
*/