import sys
opn = True
for line in sys.stdin:
    for char in line:
        if char == '"':
            if opn:
                print("``", end="")
                opn = False
            else:
                print("''", end="")
                opn = True
        else:
            print(char, end="")