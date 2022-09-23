def findUncommon(a, b):
    list1 = a.split()
    list2 = b.split()

    for i in list1:
        if i in list2:
            list1.remove(i)
            list2.remove(i)
    
    return list1 + list2

while(1):
    try:
        a = input()
        b = input()
        print(findUncommon(a, b))
        print()
    except:
        break