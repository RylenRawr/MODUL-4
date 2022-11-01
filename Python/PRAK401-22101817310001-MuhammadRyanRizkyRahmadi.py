r, a = input().split()
r =int(r)
for n in range (1, 51):
    if n % r == 0:
        print (a, end=' ')
    else :
        print (n, end=' ')