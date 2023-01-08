n= int(input())
li = list(map(int, input().split()))
a = max(li)
for i in range(n):
    b = li[i]
    if b <= a :
        c = b/a*100
        li[i] = c
sum = 0
for k in range(n):
    sum = li[k] + sum
avg= sum/n
print(avg)




