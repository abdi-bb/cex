from translate import Translator
translator= Translator(to_lang="ja")
with open('file.txt') as my_translation:
    my_file = my_translation.read()
    # translator= Translator(to_lang="ja")
    translation = translator.translate(my_file)
    print(translation)