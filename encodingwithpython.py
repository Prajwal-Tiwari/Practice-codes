key = "HORSEM"
ors = ""
oeer = ""
for i in range(0,len(key)):
    ors +=chr(ord("Z")-ord(key[i])+ord("A"))
print(ors)
for i in range(0,len(key)):
    if (ord(ors[i]) - i**2) < ord("A"):
        oeer += chr(ord("Z")-(ord("A")-(ord(ors[i]) - i**2)))
    else:
        oeer += chr(ord(ors[i]) - i**2)
print(oeer)

