word = input()
length = len(word)//10
for i in range(length):
        print(word[i*10:i*10+10])
print(word[length*10:])
