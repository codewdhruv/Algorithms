arr = list(map(int, input().split()))
d = {}

for i in arr:
    if (i in d.keys()):
        del d[i]
    else:
        d[i] = 1
print( list(d.keys()))
