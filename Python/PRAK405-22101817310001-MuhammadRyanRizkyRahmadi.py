r, y = input().split()
r = int(r)
y = int(y)
a1 = 0
a2 = 0
a3 = 0
i = 0
while i < r:
    i += 1
    j = i
    if i == 0:
        break
    while j > 0:
        j -= 1
        print("(%d * %d)" % (j + 1, y), end=" ")
        if j > 0:
            print(" + ", end=" ")
    a1 = i * y
    a2 +=a1
    print(" = %d" % (a2))
    a3 += a2
print("%d" % (a3))