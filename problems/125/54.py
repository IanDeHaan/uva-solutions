from math import ceil

n = int(input())
names = []
song = "Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you".split()
for _ in range(n):
    names.append(input())

iterations = ceil(n/16)

nameIndex = 0
for _ in range(iterations):
    for word in song:
        print(names[nameIndex] + ": " + word)
        nameIndex += 1
        nameIndex %= len(names)
