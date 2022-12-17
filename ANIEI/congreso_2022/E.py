while True:
    n = input()
    temp = int()

    if n == "0":
        exit(0)

    while len(n) != 1:
        temp = 0
        for i in range(len(n)):
            temp += int(n[i])
        n = str(temp)

    print(n)