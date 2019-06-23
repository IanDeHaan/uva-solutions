t = int(input())
for cs in range(1, t+1):
    cmd = input()
    mem = []
    for _ in range(100):
        mem.append(0)
    ptr = 0
    for char in cmd:
        if char == '>':
            ptr += 1
            ptr %= 100
        elif char == '<':
            ptr -= 1
            ptr %= 100
        elif char == '+':
            mem[ptr] += 1
            mem[ptr] %= 256
        elif char == '-':
            mem[ptr] -= 1
            mem[ptr] %= 256
    out = []
    for thing in mem:
        hx = hex(thing)[2:]
        hx = hx.upper()
        if len(hx) == 1:
            hx = '0' + hx
        out.append(hx)
    print("Case " + str(cs) + ":", " ".join(out))