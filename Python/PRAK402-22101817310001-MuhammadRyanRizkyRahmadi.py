r = int(input())
for i in range (1, r) :
    if i % 2 != 0 :
        print(i, end=' ')
print("\n")
while r > 0 :
    if r % 2 == 0 :
        print(r, end=' ')
    r -= 1