restlist = [[] for _ in range(42)]
count = 0
for i in range(10):
    num = int(input())
    rest = num%42
    if restlist[rest] == []:
        restlist[rest].append(1)
        count +=1
print(count)