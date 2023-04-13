#!/usr/bin/python3

def class_to_json(obj):
    my_dict = {}

    for key, value in vars(obj).items():
        if isinstance(value, (list, dict, str, int, bool)):
            my_dict[key] = value
    return my_dict
