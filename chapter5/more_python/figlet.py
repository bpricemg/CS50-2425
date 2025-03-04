from sys import argv
from pyfiglet import Figlet
import random

figlet = Figlet()

# The user doesn't define the font
if len(argv) == 1:
    print(figlet.getFonts())
    figlet.setFont(font=random.choice(figlet.getFonts()))

# The user defines the font
elif len(argv) == 3 and argv[2] in figlet.getFonts():
    figlet.setFont(font=argv[2])


# Otherwise, improper usage, exit
#else:

s = input("Input: ")
print("Output: ")
print(figlet.renderText(s))
