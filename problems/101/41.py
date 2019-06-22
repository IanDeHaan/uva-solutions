cs = 0
while True:
    
    
    n, p = map(int, input().split())
    if n == 0 and p == 0:
        break
    cs += 1
    if cs != 1:
        print()
    for _ in range(n):
        input()
    props = []
    names = []
    for _ in range(p):
        name = input()
        names.append(name)
        inp = input().split()
        price = float(inp[0])
        reqsmet = int(inp[1])
        props.append((reqsmet/n, -price, name))
        for _ in range(reqsmet):
            input()
    props.sort()
    print("RFP #" + str(cs))
    possible = []
    possible.append(props[-1][2])
    bestComp = props[-1][0]
    bestPrice = props[-1][1]
    for i in range(len(props)-2, -1, -1):
        if props[i][0] == bestComp and props[i][1] == bestPrice:
            possible.append(props[i][2])
        else:
            break
    for name in names:
        if name in possible:
            print(name)
            break