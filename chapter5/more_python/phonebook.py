# Search for a name
from cs50 import get_string
from sys import exit
    
people = {
    "Mia": "413-458-9582",
    "Arthur": "555-555-5555",
    "Will": "012-345-6789"
}

s = get_string("Name: ")

# Search for the number
for name in people:
    if s.upper() == name.upper():
        print(f"Found: {people[name]}")
        exit(0)

print("Not found")
exit(1)
