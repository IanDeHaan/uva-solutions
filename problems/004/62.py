import sys
for line in sys.stdin:
    hand = line.split()
    # S, H, D, C
    numSuite = dict()
    for card in hand:
        if card[1] in numSuite:
            numSuite[card[1]] += 1
        else:
            numSuite[card[1]] = 1
    pts = 0
    stopped = set()
    # rules 1-4
    for card in hand:
        if card[0] == 'A':
            pts += 4
            stopped.add(card[1])
        elif card[0] == 'K':
            pts += 3
            if numSuite[card[1]] == 1:
                pts -= 1
            else:
                stopped.add(card[1])
        elif card[0] == 'Q':
            pts += 2
            if numSuite[card[1]] < 3:
                pts -= 1
            else:
                stopped.add(card[1])
        elif card[0] == 'J':
            pts += 1
            if numSuite[card[1]] < 4:
                pts -= 1
    #print(pts)
    if pts >= 16 and len(stopped) == 4:
        print("BID NO-TRUMP")
        continue
    # rule 5, 6, 7
    for suite in numSuite:
        if numSuite[suite] == 2:
            pts += 1
        elif numSuite[suite] == 1:
            pts += 2
    pts += (4-len(numSuite))*2
    if pts < 14:
        print("PASS")
    else:
        maxSuite = 0
        for thing in numSuite:
            maxSuite = max(numSuite[thing], maxSuite)
        suites = ['S', 'H', 'D', 'C']
        for thing in suites:
            if thing in numSuite and numSuite[thing] == maxSuite:
                print("BID", thing)
                break
    