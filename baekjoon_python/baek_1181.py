wordnum = int(intput())
wordlist = []
for i in range(wordnum):
    wordlist.append(input())
length = 0
wordlist1 = []
for x in wordlist:
    if length < len(x):
        wordlist1 + [x]
        length = len(x)
    elif length > len(x):
        [x] + wordlist1
    else:
        