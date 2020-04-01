#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int p[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>p[i];

    }


}


inp=list(map(float,input().split()))
x=inp[0]
va=inp[1]
vb=inp[2]

dis_a=0.0
dis_b=x
count=0.0
if va>vb:
while dis_a<dis_b:
dis_a=dis_a+va
dis_b=dis_b+vb
count=count+1
print(2*count)
else:
print(-1)
