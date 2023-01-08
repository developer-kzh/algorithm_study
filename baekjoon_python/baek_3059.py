test = int(input())
list = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]
for i in range(test):
    total = 0
    s = input()
    for x in list:
        if x in s:
            total = total 
        else:
            askii = ord(x)
            total += askii
    print(total)
    
