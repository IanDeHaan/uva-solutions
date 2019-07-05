out = [1, 1]
for i in range(2, 51):
    out.append(out[i-1] + out[i-2])
while True:
    n = int(input())
    if n == 0:
        break
    
    print(out[n])