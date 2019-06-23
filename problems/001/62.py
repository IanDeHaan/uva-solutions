

while True:
    player1 = []
    player2 = []
    insert1 = False
    # player 1 = dealer
    # player 2 = non-dealer
    # non-dealer gets first card
    inp = input()
    if len(inp) == 1:
        break
    lines = []
    lines.append(inp)
    for _ in range(3):
        lines.append(input())
    for line in lines:
        if line == "#":
            break
        cards = line.split()
        for card in cards:
            if card == '#':
                continue
            if insert1:
                player1.append(card)
            else:
                player2.append(card)
            insert1 = not insert1
    #print(player1)
    #print(player2)
    # non-dealer plays first
    turn1 = False
    mvs = 1
    pickup = False
    done = False
    deck = []
    win1 = True
    while True:
        if done:
            break
        while mvs > 0:
            card = ""
            if turn1:
                if len(player1) == 0:
                    win1 = False
                    done = True
                    break
                card = player1[-1]
                player1.pop()
            else:
                if len(player2) == 0:
                    win1 = True
                    done = True
                    break
                card = player2[-1]
                player2.pop()
            deck.append(card)
            #print(card)
            if card[1] == 'J':
                turn1 = not turn1
                mvs = 1
                pickup = True
                break
            elif card[1] == 'Q':
                turn1 = not turn1
                mvs = 2
                pickup = True
                break
            elif card[1] == 'K':
                turn1 = not turn1
                mvs = 3
                pickup = True
                break
            elif card[1] == 'A':
                turn1 = not turn1
                mvs = 4
                pickup = True
                break
            else:
                mvs -= 1
        if mvs == 0:
            mvs = 1
            turn1 = not turn1
            if pickup:
                bottomOfDeck = []
                for i in range(len(deck)-1, -1, -1):
                    bottomOfDeck.append(deck[i])
                deck = []
                if turn1:
                    # player 1 picks up
                    player1 = bottomOfDeck + player1
                else:
                    # player 2 picks up
                    player2 = bottomOfDeck + player2
            pickup = False
    if win1:
        print(1, end=" ")
        if len(player1) < 10:
            print("", len(player1))
        else:
            print(len(player1))
    else:
        print(2, end=" ")
        if len(player2) < 10:
            print("", len(player2))
        else:
            print(len(player2))