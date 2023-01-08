while True:
    a, b = map(int, input().split())
    if a == 0 and b == 0 :
        break
    print(a+b)

while True:
    a, b = map(int, input().split())
    print(a+b)  
    # 이렇게 작성하면 a=0 b=0 을 입력 받았을 때
    # print(0+0) 출력 된 후 break 됨.
    if a == 0 and b == 0 :
        break
     
