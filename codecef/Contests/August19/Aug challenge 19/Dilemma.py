t=int(input())
for i in range(t):
    s=input()
    l=len(s)
    cnt=0
    for i in range(l):
        if s[i]=='1':
            cnt=cnt+1
    if cnt%2==0:
        print("LOSE")
    else:
        print("WIN")
    
        
        