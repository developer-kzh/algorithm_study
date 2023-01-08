testcase = int(input())
for _ in range(testcase):
    score = 0
    cor = 1
    result = input()
    for ans in result:
        if ans == "O":
            score += cor
            cor +=1
        else:
            cor = 1
    print(score)



