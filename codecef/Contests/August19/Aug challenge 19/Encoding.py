t=int(input())
for k in range(t):
    nl,l=list(map(int,input().split()))
    nr,r=list(map(int,input().split()))
    vect=[]
    for i in range(l,r+1):
        s=str(i)
        vect.append(s)
    #for i in range(len(vect)):
        #   print(vect[i])
    vect1=[]
    for i in range(len(vect)):
        s1=vect[i]
    # print(s1)
        s2=s1
        li=list(s2)
        m=len(s1)
        #print(m)
        #print(s2)
        if m>1:
            for j in range(m-1):
                if s1[j]==s1[j+1]:
                    li[j+1]='0'
                    s2="".join(li)
                    #print(s2)
                    #s2="".join(s2)
            vect1.append(s2)
        else:
            vect1.append(s2)
    #for i in range(len(vect1)):
        #   print(vect1[i])
    mod=(10**9)+7
    sum1=0
    for i in range(len(vect1)):
        n=int(vect1[i])
        sum1=(sum1+n)%mod
    print(sum1)


