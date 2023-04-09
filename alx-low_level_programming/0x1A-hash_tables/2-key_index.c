#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int u;

    u = hash_djb2(key);

    return (u % size);
}