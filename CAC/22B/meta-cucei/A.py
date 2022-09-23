t = int(input())

facebook = [*"facebook"]
k = 0
flags = [False] * len(facebook)
case_counter = 1

for _ in range(t):
    string = str(input())

    for i in range(len(string)):
        if string[i] == facebook[k]:
            flags[k] = True
            k += 1
            if(k==len(facebook)):
                break
    
    print("Case #{}: {}".format(case_counter, "YES" if all(flags) else "NO"))
    case_counter += 1
    k = 0
    flags = [False] * len(facebook)