t=int(input())
for i in range(t):
    arr=[0]*8
    no=int(input())
    a=str(input())
    n=len(a)
    for i in range(n-2):
        str1=a[i:i+3]
        if(str1=="TTT"):
            arr[0]+=1
        if(str1=="TTH"):
            arr[1]+=1
        if(str1=="THT"):
            arr[2]+=1
        if(str1=="THH"):
            arr[3]+=1
        if(str1=="HTT"):
            arr[4]+=1
        if(str1=="HTH"):
            arr[5]+=1
        if(str1=="HHT"):
            arr[6]+=1
        if(str1=="HHH"):
            arr[7]+=1
    print(no,*arr)