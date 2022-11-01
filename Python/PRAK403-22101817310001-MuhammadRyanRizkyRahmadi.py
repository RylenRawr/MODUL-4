r, y = input().split()
r = int(r)
y = int(y)
if r < y:
    for i in range(r, y):
        print(r, y, end=' - ')
        r += 1
        y -= 1
        continue
    print(r, y, end='  ')
    r += 1
    y -= 1
else:
    if r > y:
        n = r
        n1 = y
        for i in range(y, r):
            print(r, y, end= ' - ')
            r -= 1
            y += 1
            if r % n1 == 1:
                break
    if r < y:
        for i in range(r, y):
            print(r, y, end=' - ')
            r -= 1
            y += 1
            break
        print(r, y, end= ' ')
        r -= 1
        y += 1