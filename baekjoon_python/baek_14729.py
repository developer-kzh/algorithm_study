numofstudent = int(input())
scorelist = []
for _ in range(numofstudent):
    score = input()
    scorelist.append(score)
print(scorelist)
scorelist.sort()
for i in range(7):
    print(scorelist[i])