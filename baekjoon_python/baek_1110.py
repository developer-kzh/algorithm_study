n = input()
count=0
if int(n) < 10:
    f = str(n) * 2
    count += 1
else:
    f = n
while int(n) != f :
    c = str(f)[0]
    d = str(f)[1]
    e = int(c) + int(d)
    if e < 10 :
        pass
    else:
        e = str(e)[1]
    f = int(d + str(e)) 

    count +=1

print(count)



