# Search for a name
from cs50 import get_string
from sys import exit

names = ["Mia", "Arthur", "Will"]

s = get_string("Name: ")

# Search for the number
for name in names:
    if s.upper() == name.upper():
        print("Found")
        exit(0)

print("Not found")
exit(1)
