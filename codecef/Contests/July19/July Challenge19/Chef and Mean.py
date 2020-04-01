t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    #print (arr)
    sum=0
    for i in range(n):
        sum=sum+arr[i]
    sum=sum/n  
    f=0
    for i in range(n):
       if sum==arr[i]:
           print(i+1)
           break
    for i in range(n):
        if sum==arr[i]:
            f=1

    if(f==0):
        print("Impossible")
           
        
    #print(sum)
        

