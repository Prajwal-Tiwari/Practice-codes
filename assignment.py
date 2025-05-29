def reverse(s):
    for i in range(-1,-(len(s)+1),-1):
        print(s[i])
a = "hukli"
ch = 'l'
l = []
for i in range(len(a)):
    if ch != a[i]:
        l.append(a[i])
    else:
        break
reverse(l)

