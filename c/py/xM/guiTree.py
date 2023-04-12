picture = [
  [0,0,0,1,0,0,0],
  [0,0,1,1,1,0,0],
  [0,1,1,1,1,1,0],
  [1,1,1,1,1,1,1],
  [0,0,0,1,0,0,0],
  [0,0,0,1,0,0,0]
]

# for i in list(range(6)):
  # for j in list(range(7)):
    # if picture[i][j] == 1:
      # print('*', end='')
    # else:
      # print(' ', end='')
  # print('')

# for row in list(range(6)):
  # for column in list(range(7)):
    # if picture[row][column] == 1:
      # print('*', end='')
    # else:
      # print(' ', end='')
  # print('')

for row in picture:
  for pixel in row:
    if pixel == 1:
      print('*', end='')
    else:
      print(' ', end='')
  print('')
  
print('')
print('')

long_string = '''
   *
  ***
 *****
*******
   *
   *
  ~*~
   '''
print(long_string)