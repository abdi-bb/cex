#!/usr/bin/python3

'''
module: '11-student'
class:
    Student
'''


class Student:
    '''Represents class Student'''

    def __init__(self, first_name, last_name, age):
        '''Instantiation of new student'''
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        if attrs is None:
            return self.__dict__
        else:
            my_dict = {}
            for attr in attrs:
                if hasattr(self, attr):
                    my_dict[attr] = self.__dict[attr]
            return my_dict

    def reload_from_json(self, json):
        for key, value in json.items():
            setattr(self, key, value)

    def __str__(self):
        return "{} {} - {}".format(self.first_name, self.last_name, self.age)
