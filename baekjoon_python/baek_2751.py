n = int(input())
li =  []
import sys
input = sys.stdin.readline
for i in range(n):
    a = int(input())
    li.append(a)
li.sort()
for x in range(n):
    print(li[x])