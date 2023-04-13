#!/usr/bin/python3


class Student:
    def __init__(self, first_name, last_name, age):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        my_dict = {}

        for k, v in vars(self).items():
            if attrs == None:
                my_dict = self.__dict__
            else:
                for attr in attrs:
                    if attr in self.__dict__:
                        my_dict[attr] = self.__dict__[attr]
        return my_dict
