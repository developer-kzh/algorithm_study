sentence = input()
count = 0
if sentence[0] != " ":
    for i in sentence:
        if i == " ":
            count +=1
    if sentence[-1] != " ":
        print(count+1)
    else:
        print(count)
else:
    for i in sentence:
        if i == " ":
            count +=1
    if sentence[-1] != " ":
        print(count)
    else:
        print(count-1)