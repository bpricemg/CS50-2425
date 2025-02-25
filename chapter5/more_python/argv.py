# Say hello to a user given their name in the command line
from sys import argv

# If there is at least one name
if len(argv) >= 2:
    print("hello, ", end="")
    # Print every name after argv[0]

