
#include<bits/stdc++.h>
using namespace std;
/*
int main()
{

 int n;
 cin>>n;

 int a,b,sum=0,sum1=0,dif=0,dif1=0,maximum;
 for(int i=0;i<n;i++)
 {

     cin>>a>>b;

     sum+=a;
     sum1+=b;

    maximum=max(sum,sum1);
    if(a>b)
    {
    dif=max(dif,abs(a-b));
    }
    else if(b>a)
    {
        dif1=max(dif1,abs(a-b));
    }



     //cout<<sum<<sum1;
 }

  if(dif>dif1)
    {
        cout<<1<<" "<<dif;
    }
    else if(dif<dif1)
    {
         cout<<2<<" "<<dif1;
    }

 //cout<<maximum<<" "<<dif;


}
*/
int main()
{

int n;

    scanf("%d",&n);

    int a[n],b[n],sum1=0,sum2=0,i,x1=0,x2=0;

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);

        sum1+=a[i];
        sum2+=b[i];

        a[i]=sum1;
        b[i]=sum2;

        if(a[i]>b[i])
        {
            x1=max(x1,abs(a[i]-b[i]));
        }
        else if(a[i]<b[i])
        {
            x2=max(x2,abs(a[i]-b[i]));
        }

    }

    if(x1>x2)
        cout<<1<<" "<<x1;
    else if(x1<x2)
       cout<<2<<" "<<x2;

    return 0;
}
