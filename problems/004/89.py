while True:
    rnd = int(input())
    if rnd == -1:
        break
    print("Round", rnd)
    word = input()
    guesses = input()
    needed = set()
    for c in word:
        needed.add(c)
    lose = False
    win = False
    wrong = 0
    for i in range(len(guesses)):
        if guesses[i] in needed:
            needed.remove(guesses[i])
            if len(needed) == 0:
                win = True
                break
        else:
            wrong += 1
            if wrong == 7:
                lose = True
                break
    if lose:
        print("You lose.")
    elif win:
        print("You win.")
    else:
        print("You chickened out.")