import sys

fib = [0, 1]
for i in range(2, 5001):
    fib.append(fib[i-1] + fib[i-2])

for line in sys.stdin:
    n = int(line)
    print("The Fibonacci number for", n, "is", fib[n])
