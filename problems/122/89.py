n = int(input())
for _ in range(n):
    inp = input()
    if len(inp) == 5:
        print(3)
    else:
        one = 0
        if inp[0] == 'o':
            one += 1
        if inp[1] == 'n':
            one += 1
        if inp[2] == 'e':
            one += 1
        if one >= 2:
            print(1)
        else:
            print(2)