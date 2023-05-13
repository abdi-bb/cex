#!/usr/bin/python3
'''
module: 'base_model'
class: BaseModel
'''

import uuid
from datetime import datetime
import models

class BaseModel:
    def __init__(self, *args, **kwargs):
        self.id = str(uuid.uuid4())
        self.created_at = datetime.now()
        self.updated_at = datetime.now()
        if kwargs:
            for k, v in kwargs.items():
                if k != '__class__':
                    if k in ('created_at', 'updated_at'):
                        v = datetime.strptime(v, '%Y-%m-%dT%H:%M:%S.%f')
                    setattr(self, k, v)
        else:
            models.storage.new(self)

    def __str__(self):
        return "[{}] ({}) {}".format(type(self).__name__, self.id, self.__dict__)

    def save(self):
        self.updated_at = datetime.now()
        models.storage.save()

    def to_dict(self):
        my_dict = self.__dict__.copy()
        my_dict['__class__'] = type(self).__name__
        if hasattr(self, 'created_at'):
            my_dict['created_at'] = self.created_at.isoformat()
        if hasattr(self, 'updated_at'):
            my_dict['updated_at'] = self.updated_at.isoformat()
        my_dict.pop('_sa_instance_state', None)
        return my_dict
