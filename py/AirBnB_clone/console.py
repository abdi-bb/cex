#!/usr/bin/python3
'''
Command Interpreter module
module: console
class: HBNBCommand
'''

import cmd
import models
from models.base_model import BaseModel


class HBNBCommand(cmd.Cmd):
    '''Command Interpreter class'''

    prompt = '(hbnb) '
    available_classes = [BaseModel]

    def do_quit(self, line):
        '''Quit command to exit the program

        '''
        return True

    def do_EOF(self, line):
        '''EOF command to exit the program

        '''
        print()
        return True

    def emptyline(self):
        pass

    def do_create(self, line):
        args = line.split()
        if len(args) == 0:
            print('** class name missing **')
            return
        try:
            class_name = args[0]
            if class_name not in [c.__name__ for c in HBNBCommand.available_classes]:
                print("** class doesn't exist **")
                return
            obj = eval(class_name)()
            obj.save()
            print(obj.id)
        except Exception as e:
            print(e)

    def do_show(self, line):
        args = line.split()
        if len(args) == 0:
            print('** class name missing **')
            return
        try:
            class_name = args[0]
            if class_name not in [c.__name__ for c in HBNBCommand.available_classes]:
                print("** class doesn't exist **")
            elif len(args) == 1:
                print("** instance id missing **")
            else:
                obj_id = args[1]
                key = '{}.{}'.format(class_name, obj_id)
                objects = models.storage.all()
                if key in objects:
                    print(objects[key])
                else:
                    print('** no instance found **')
        except Exception as e:
            print(e)




if __name__ == '__main__':
    HBNBCommand().cmdloop()
