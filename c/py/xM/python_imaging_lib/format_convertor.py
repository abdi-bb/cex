import sys
import os
from PIL import Image

# grab first and second argument
image_folder = sys.argv[1]
output_folder = sys.argv[2]

# check if the destination folder exists, if not create it
if not os.path.exists(output_folder):
    os.makedirs(output_folder)

# iterate all through the directory and convert the format of the files(jpg) in the folder of image_folder to pnj format and save in the folder of output_folder
for filename in os.listdir(image_folder):
    img = Image.open(f'{image_folder}{filename}')
    clean_name = os.path.splitext(filename)[0]
    img.save(f'{output_folder}{clean_name}.png', 'png')