#include <bits/stdc++.h>
using namespace std;
long p=1000000007;

long power(long x, long y, long p)
{
    long res = 1;

    x = x % p;

    while (y > 0)
    {

        if (y & 1)
            res = (res*x) % p;


        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
void find_ans(long n,long q )
{
      long tp=1;
   long bt=power(2,n,p);
   long rt=n+1;
   long lt=n+1;

   long ans=2*(power(2,n,p)-1);

   for(int i=0;i<q;i++)
   {
       int a;
       cin>>a;
       int abc=__gcd(n,q);
       if(a==1)
       {
           int x;
           cin>>x;
           if(x==1)
           {
              ans=(((ans*2)%p)+lt)%p;
               bt=(bt*2)%p;
               tp=(tp*2)%p;
           }
           else if(x==2)
           {
               int abcd=__gcd(n,q);
               ans=(((ans*2)%p)+rt)%p;
               bt=(bt*2)%p;
               tp=(tp*2)%p;
           }
          else if(x==3)
           {
               int abcde=__gcd(n,q);
               ans=(((ans*2)%p)+tp)%p;
               tp=bt;
               lt=(lt*2)%p;
               rt=(rt*2)%p;
           }
           else
           {
               ans=(((ans*2)%p)+bt)%p;
               bt=tp;
               lt=(lt*2)%p;
               rt=(rt*2)%p;
           }

       }
       else
       {
           cout<<ans<<endl;
          // cout<<lt<<endl;
       }
   }
}

int main()
{
   int n,q;
   cin>>n>>q;
    find_ans(n,q);


}

