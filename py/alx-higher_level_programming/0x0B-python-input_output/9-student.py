#!/usr/bin/python3


class Student:
    def __init__(self, first_name, last_name, age):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self):
        my_dict = {}

        for key, value in vars(self).items():
            my_dict[key] = value
        return my_dict
