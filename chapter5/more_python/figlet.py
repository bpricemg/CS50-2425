from sys import argv
from pyfiglet import Figlet
import random

figlet = Figlet()

# The user defines the font
if len(argv) == 3 and argv[2] in figlet.getFonts() and argv[1] in ["-f", "--font"]:
    figlet.setFont(font=argv[2])

# Else pick a random font
else:
    figlet.setFont(font=random.choice(figlet.getFonts()))

s = input("Input: ")
print("Output: ")
print(figlet.renderText(s))
