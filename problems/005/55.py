import functools

suits = dict()
suits['C'] = 0
suits['D'] = 1
suits['S'] = 2
suits['H'] = 3

nums = dict()
for i in range(2, 10):
    nums[str(i)] = i-2
nums['T'] = 8
nums['J'] = 9
nums['Q'] = 10
nums['K'] = 11
nums['A'] = 12

def compare(a, b):
    if suits[a[0]] < suits[b[0]]:
        return -1
    elif suits[a[0]] > suits[b[0]]:
        return 1
    elif nums[a[1]] < nums[b[1]]:
        return -1
    else:
        return 1

players = dict()
players['S'] = 0
players['W'] = 1
players['N'] = 2
players['E'] = 3


while True:
    deck = []
    for _ in range(4):
        deck.append([])
    dealer = input()
    if dealer == '#':
        break
    dealer = players[dealer]
    pos = (dealer+1)%4
    for i in range(2):
        inp = input()
        for i in range(0, len(inp), 2):
            deck[pos].append(inp[i:i+2])
            pos += 1
            pos %= 4
    for i in range(4):
        deck[i] = sorted(deck[i], key=functools.cmp_to_key(compare))
    plyrs = ['S', 'W', 'N', 'E']
    for i in range(4):
        print(plyrs[i] + ":", " ".join(deck[i]))