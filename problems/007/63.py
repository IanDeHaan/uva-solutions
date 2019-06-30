outs = []

while True:
    a = ""
    b = ""
    try:
        a = input()
    except:
        break
    b = input()
    # last thing first
    out = []
    a = a[::-1]
    b = b[::-1]
    for i in range(max(len(a), len(b))):
        if i >= len(a):
            out.append(int(b[i]))
        elif i >= len(b):
            out.append(int(a[i]))
        else:
            out.append(int(a[i]) + int(b[i]))
    #print(out)

    #change = False
    while True:
        change = False
        #print(out)
        for i in range(len(out)-1, -1, -1):
            #print(out, i)
            # if 1, 1, then push up
            while i > 0 and out[i] > 0 and out[i-1] > 0:
                if i == len(out)-1:
                    #print("YEET")
                    out.append(1)
                else:
                    out[i+1] += 1
                out[i] -= 1
                out[i-1] -= 1
                change = True
            if change:
                break
            
            # if  > 1, push down
            while out[i] > 1:
                #print("change", i)
                if i > 1:
                    out[i] -= 1
                    out[i-1] += 1
                    out[i-2] += 1
                elif i == 1:
                    out[i] -= 1
                    out[i-1] += 2
                else:
                    out[i] -= 2
                    out[i+1] += 1
                change = True
            if change:
                break

        if not change:
            break
    yeet = []
    out.reverse()
    for thing in out:
        yeet.append(str(thing))
    outs.append("".join(yeet))
    

    # consume empty line
    try:
        input()
    except:
        break
print(outs[0])
for i in range(1, len(outs)):
    print()
    print(outs[i])