N = int(input())
num = 0
if 1<= N <= 99:
    num += N
elif 100 <= N < 1000:
    N_list = [[i] for i in range(100,N+1)]
    for i in N_list:
        numstr = str(i[0])
        N1 = numstr[0]
        N2 = numstr[1]
        N3 = numstr[2]
        if 2*int(N2) == int(N1) + int(N3):
            num += 1
    num += 99
elif N == 1000:
    num = 144
print(num) 