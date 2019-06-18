t = int(input())
for i in range(t):
    n = int(input())
    stores = map(int, input().split())
    stores = sorted(stores)
    print(2*(stores[n-1]-stores[0]))
