# Search for a name
from cs50 import get_string
from sys import exit

names = ["MIA", "ARTHUR", "WILL"]

s = get_string("Name: ")

# Search for the number
if s.upper() in names:
    print("Found")
    exit(0)

print("Not found")
exit(1)
