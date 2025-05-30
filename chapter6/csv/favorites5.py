# Count favorites using a variable

import csv

# Open CSV file
with open("favorites.csv", "r") as file:

    # Create DictReader
    reader = csv.DictReader(file)

    # Count
    counts = {}

    # Iterate over CSV file, printing each language favorite
    for row in reader:
        favorite = row["problem"]
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1

# Print counts
for favorite in sorted(counts, key=counts.get, reverse = True):
    print(f"{favorite}: {counts[favorite]}")



