while True:
    inp = input()
    if inp == "END":
        break
    if inp == "1":
        print(1)
        continue
    i = 1
    prev = len(inp)
    x = len(str(prev))
    while x != prev:
        prev = x
        x = len(str(x))
        i += 1
    print(i+1)