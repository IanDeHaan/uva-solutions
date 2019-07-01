memo = []

def poss(n, pos, dr):
    if memo[n][pos][dr] != -1:
        return memo[n][pos][dr]
    if n == 0:
        return 1
    if dr == 0:
        if pos == 0:
            memo[n][pos][dr] = poss(n-1, 1, 1) + poss(n-1, 2, 1)
        elif pos == 1:
            memo[n][pos][dr] = poss(n-1, 2, 1)
    elif dr == 1:
        if pos == 1:
            memo[n][pos][dr] = poss(n-1, 0, 0)
        elif pos == 2:
            memo[n][pos][dr] = poss(n-1, 0, 0) + poss(n-1, 1, 0)
    return memo[n][pos][dr]

for _ in range(1001):
    yeet = []
    for _ in range(3):
        yoink = []
        for _ in range(2):
            yoink.append(-1)
        yeet.append(yoink)
    memo.append(yeet)

import sys
for line in sys.stdin:
    n = int(line.split()[0])
    print(poss(n, 0, 0))
