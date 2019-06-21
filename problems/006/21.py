n = int(input())
for _ in range(n):
    inp = input()
    if inp == "1" or inp == "4" or inp == "78":
        print("+")
    elif inp[-1] == '5' and inp[-2] == '3':
        print("-")
    elif inp[0] == '9' and inp[-1] == '4':
        print("*")
    else:
        print("?")