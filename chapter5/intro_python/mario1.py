from cs50 import get_int

def main():
    # Get the height from the user
    n = get_height()

    # Print the blocks horizontally
    for i in range(n):
        print("#", end="")
    # Print a new line to end
    print()



def get_height():
    while True:
        n = get_int("Height: ")
        if n > 0:
            break
    return n

main()
