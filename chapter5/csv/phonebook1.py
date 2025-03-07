# Search for a name in phonebook.csv
from cs50 import get_string
import csv
from sys import exit

# Open csv into a list of disctionaries
people = []
with open('phonebook.csv', 'r') as file:
    reader = csv.DictReader(file)
    for row in reader:
        people.append(row)

#print(people)

s = get_string("Name: ")

# Search for the number
for person in people:
    if s.upper() == person['Name'].upper():
        print(f"Found: {person['Number']}")
        exit(0)

print("Not found")
exit(1)
