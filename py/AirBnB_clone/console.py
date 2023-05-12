#!/usr/bin/python3
'''
Command Interpreter module
module: console
class: HBNBCommand
'''

import cmd


class HBNBCommand(cmd.Cmd):
    '''Command Interpreter class'''

    prompt = '(hbnb) '

    def do_quit(self, arg):
        '''Quit command to exit the program

        '''
        return True

    def do_EOF(self, arg):
        '''EOF command to exit the program

        '''

        print()
        return True

    def emptyline(self):
        pass


if __name__ == '__main__':
    HBNBCommand().cmdloop()
