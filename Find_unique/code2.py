nums = list(map(int, input().split()))
d = {}
for i in nums:
    if i in d:
        del d[i]
    else:
        d[i] =1

print(list(d.keys())[0])
