#!/usr/bin/python3
'''
module: 'base_model'
class: BaseModel
'''

import uuid
from datetime import datetime


class BaseModel():
    '''base class'''
    
    def __init__(self) -> None:
        self.id = str(uuid.uuid4)
        self.created_at = datetime.now()
        self.updated_at = datetime.now()

    def __str__(self):
        return f'[{type(self).__name__}] ({self.id}) {self.__dict__}'

    def save(self):
        self.updated_at = datetime.now()

    def to_dict(self):
        my_dict = self.__dict__.copy
        my_dict['__class__'] = type(self).__name__
        my_dict['created_at'] = self.created_at.isoformat()
        my_dict['updated_at'] = self.updated_at.isoformat()
        return my_dict