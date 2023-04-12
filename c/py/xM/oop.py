class playerCharacter:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def run(self):
        return 'run'
    

player1 = playerCharacter('Tom', 23)
player2 = playerCharacter('Jerry', 20)
player1.attack = 80

print(player1.name)
print(player1.age)
print(player1.attack)
print(player2.run())


'''class definition'''

class nameOfClass:
    class_attribute = 'value'
    def __init__(self, param1, param2):
        self.param1 = param1
        self.param2 = param2

    def method():
        #code

    @classmethod
    def cls_mthd(cls, param1, param2):
        #code

    @staticmethod
    def stc_mthd(param1, param2):
        #code