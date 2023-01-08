def comb(n,k):
    if k != 0 and k != n:
        return comb(n-1,k-1) + comb(n-1, k)
    else:
        return 1
n = int(input())
k = int(input())
print(comb(n,k)) 