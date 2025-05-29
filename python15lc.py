nums = [2,0,-1,-2,3,-5,4,1]
a = []
b = []
for i in range(len(nums)):
    for j in range(len(nums)):
        for k in range(len(nums)):
            if (nums[i]+nums[j]+nums[k] == 0 and i!=j and i!=k and j!=k):
                a.append([i,j,k])

sum = a[0][0]+a[0][1]+a[0][2] 
print(a[0][1])
print(sum)