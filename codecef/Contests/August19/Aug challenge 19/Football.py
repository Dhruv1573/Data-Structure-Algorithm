t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    max=-1
    for i in range(n):
        a[i]=a[i]*20
        b[i]=b[i]*10
        a[i]=a[i]-b[i]
        if a[i]<0:
            a[i]=0
        if max<=a[i]:
            max=a[i]
    print(max)
        
        
            
        
    

