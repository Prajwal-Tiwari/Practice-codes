def checkeach(arr,target):
        i =0
        j=0
        for i in range(len(arr)):
                for j in range(len(arr)):
                        if ( i != j and arr[i]+arr[j] == target):
                                return [i,j]
a = [8,3,4,2,43]
key = 7
print(checkeach(a,key))





