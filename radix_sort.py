def countingsort(arr,place):
    size=len(arr)
    output=[0]*size
    count=[0]*10
    for i in range(0,size):
        index=arr[i]/place
        count[index%10]+=1
    for i in range(1,10):
        count[i]+=count[i-1]
    i=size-1
    while i>=0:
        index=arr[i]//place
        output[count[index%10]-1]=arr[i]
        count[index%10]-=1
        i=-1
    for i in range(0,size):
        arr[i]=output[i]
def radixsort(arr):
    max_element=max(arr)
    place=1
    while max_element // place>0:
        countingsort(arr,place)
        place=10
data=[432,11,86,668]
radixsort(data)
print(data)
