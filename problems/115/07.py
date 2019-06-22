while True:
    n = int(input())
    if n == 0:
        break
    direction = "+x"
    moves = input().split()
    for move in moves:
        if move == "No":
            continue
        if direction == "+x":
            direction = move
        elif direction == "-x":
            if move[0] == '-':
                direction = '+' + move[1]
            else:
                direction = '-' + move[1]
        elif direction[1] == 'y':
            if move[1] == 'z':
                direction = direction
            else:
                if move == direction:
                    direction = '-x'
                else:
                    direction = '+x'
        else:
            if move[1] == 'y':
                direction = direction
            else:
                if move == direction:
                    direction = '-x'
                else:
                    direction = '+x'
    print(direction)