while True:
    inp = input()
    if len(inp) == 1:
        break
    inp = inp.split()
    k = int(inp[0])
    m = int(inp[1])
    taken = input().split()
    good = True
    for _ in range(m):
       #  print(taken)
        inp = input().split()
        r = int(inp[1])
        cnt = 0
        for thing in inp[2:]:
            if thing in taken:
                cnt += 1
        if cnt < r:
            good = False
    if good:
        print("yes")
    else:
        print("no")