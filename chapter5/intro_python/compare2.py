from cs50 import get_string

s = get_string("Do you agree? (y/n) ")

if s == "y" or s == "Y":
    print("yes")
elif s == "n" or s == "N":
    print("no")
