N = int(input())
bag = []
for i in range(0,1001):
    for j in range(0,1667):
        if 5*i + 3*j == N:
            bag.append(i+j)
if N%3 != 0 and N%5 != 0:
    bag.append(-1)
bag.sort()
if bag[0] == -1 and len(bag) == 1:
    print(bag[0])
elif bag[0] == -1 and len(bag) >=2:
    print(bag[1])
elif bag[0] != -1:
    print(bag[0])