fib = [1, 1, 2]
for _ in range(100):
    fib.append(fib[-1] + fib[-2])

import sys
for line in sys.stdin:
    n = int(line)
    print(n)
    slots = []
    vals = []
    for i in range(102, -1, -1):
        if fib[i] <= n:
            n -= fib[i]
            slots.append(str(i))
            vals.append(str(fib[i]))
    print(" ".join(slots), "")
    print(" ".join(vals), "")
    print()