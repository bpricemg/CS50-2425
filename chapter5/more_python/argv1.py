# Say hello to a use given their name in command line
from sys import argv

# Error checking
if len(argv) < 2:
    # Print a usage error
    print("Usage: python argv1.py [first name] [second name] ...")

    # Exit
    exit(1)

print("hello, ", end="")
# Print every name after argv[0]
for arg in argv[1:]:
    print(f"{arg} ", end="")
print()
