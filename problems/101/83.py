fib = [1, 1, 2]
for _ in range(500):
    fib.append(fib[-1] + fib[-2])

while True:
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break
    
    out = 0
    for i in range(1, len(fib)):
        f = fib[i]
        if f > b:
            break
        if f >= a:
            out += 1
    print(out)