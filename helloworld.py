import secure
x = secure.password['name']
for i in range(ord('a'),ord('z'),1):
    for j in range(ord('a'),ord('z'),1):
        for k in range(ord('a'),ord('z'),1):
            for l in range(ord('a'),ord('z'),1):
                print(chr(i),chr(j),chr(k),chr(l))
                if chr(l) == x[3]:
                    break
            if chr(k) == x[2]:
                break
        if chr(j) == x[1]:
            break
    if chr(i) ==  x[0]:
        break

                
                    







