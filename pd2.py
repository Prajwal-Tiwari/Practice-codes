a= ['harsh','hannah','halka']
a.sort()
b=""
c = 0
print(a)
for i in range(0,len(a[0])):
    for k in range(0,len(a)):
        if a[0][i] == a[k][i]:
            d = a[k][i]
            c =1
        else:
            c =0
            break
    if c == 0:
        break
    else:
        b += d
print(b)