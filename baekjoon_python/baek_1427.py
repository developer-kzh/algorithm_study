num = list(input())
ns = ""
nsl = sorted(num, reverse=True)
for i in nsl:
    ns += i
print(ns)
