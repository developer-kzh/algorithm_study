import sys
s = sys.stdin.readline().strip()
num = len(s)
suffix = []
for i in range(num):
    suffix = suffix + [s[i:]]
suffix.sort()
for x in suffix:
    print(x)


