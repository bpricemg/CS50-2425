from cs50 import get_string

s = get_string("Do you agree? (y/n) ")

if s in ["y", "Y", "yes", "YES", "Yes"]:
    print("yes")
elif s in ["n", "N", "no", "NO", "No"]:
    print("no")
