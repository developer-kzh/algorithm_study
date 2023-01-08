longform = input()
shortform = ""
for word in longform:
    if (word != "-" and word == word.upper()):
        shortform += word
print(shortform)