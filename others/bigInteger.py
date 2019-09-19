while (True):
    try:
        number = int(input())
        answ = 1
        for x in range(2,number+1):
            answ = answ*x
        print(answ)
    except:
        break