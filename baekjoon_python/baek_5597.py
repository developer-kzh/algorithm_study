li = []
for i in range(28):
    a = int(input())
    li = li + [a]
for x in range(30):
    if x+1 in li:
        continue
    else:
        print(x+1)
