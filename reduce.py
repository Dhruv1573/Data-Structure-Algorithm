n,m,c,k=map(int,input().split())
u=list()
v=list()
w=list()
for i in range(0,m):
ti,yi,ci=map(int,input().split())
u.append(ti)
v.append(yi)
w.append(ci)
w,u,v=(list(t) for t in zip(*sorted(zip(w,u,v))))
for i in range(0,c):
print(u[i],v[i])