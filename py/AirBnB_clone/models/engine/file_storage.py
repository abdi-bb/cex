#!/usr/bin/python3
'''
module: file_storage
class: FileStorage
'''

import json
from models.base_model import BaseModel

class FileStorage():
    '''class FileStorage'''
    __file_path = 'file.json'
    __objects = {}

    def all(self):
        return self.__objects

    def new(self, obj):
        key = f'{obj.__class__.__name__}.{obj.id}'
        self.__objects[key] = obj

    def save(self):
        with open(self.__file_path, "w", encoding='utf-8') as f:
            obj_dict = {}
            for k, obj in self.__objects.items():
                obj_dict[k] = obj.to_dict()
            json.dump(obj_dict, f)

    def reload(self):
        try:
            with open(self.__file_path, 'r', encoding='utf-8') as f:
                obj_dict = json.load(f)
                for key, obj_dict in obj_dict.items():
                    class_name, obj_id = key.split('.')
                    obj_dict['__class__'] = class_name
                    obj = eval(class_name)(**obj_dict)
                    self.__objects[key] = obj
        except Exception:
            pass
