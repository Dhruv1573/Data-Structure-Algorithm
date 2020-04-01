#include<bits/stdc++.h>
using namespace std;

int ar[100001];
int n;
int query1(int id,int value)
{

        if(value==0)
            return ar[id];

        if(id==n)
            query1(1, value-1);
        else
            query1(id+1,value-1);
}

long long query2(int l,int r)
{

   if(l==r)
         return ar[l];

        if(l==n)
            return ar[l]+query2(1,r);

        else
            return ar[l]+query2(l+1,r);

}

int main(){
    int q;
    scanf("%d %d",&n,&q);
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    while(q--)
    {
        int type,x,y;
        scanf("%d %d %d",&type,&x,&y);
        if(type==1)
        query1(x,y);
        else
        printf("%lld\n",query2(x,y));
    }
   return 0;
}
