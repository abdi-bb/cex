#!/usr/bin/python3

import json
import sys

__import__('5-save_to_json_file').save_to_json_file
__import__('6-load_from_json_file').load_from_json_file

def add_item_to_list():
    my_list = []
    i = 0
    while sys.argv[i]:
        my_list.append(sys.argv[i])
        i += 1
        with open(add_item.json, 'w', encoding='utf-8') as f:
    return json.dump(my_list, f)


if __name__ == '__main__':
    add_item_to_list()
