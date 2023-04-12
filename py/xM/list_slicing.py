amazon_cart = [
              'book',
              'sunglass',
              'toys',
              'grapes'
              ]
# copying or creating a new a list
print("copying\n")
new_cart = amazon_cart[:]
new_cart[0] = 'gum'
print(amazon_cart)
print(new_cart)

# equating or assigning/modifying a list
print("equating\n")
new_cart2 = amazon_cart
new_cart2[0] = 'gum'
print(new_cart2)
print(amazon_cart)