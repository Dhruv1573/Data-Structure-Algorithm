
#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin>>n;
    //vector<int>vect;
        long long sum=0,sum1=0;
        long long z=n/2;

        long long s=z+1;

        if(n%2==0)
        {
            long long a=n/2;
          long long q=a+1;
          //cout<<q;
        long long  p=a-1;
        //cout<<p;
         while (q!= 0)
        {
     long long remainder = q% 10;
      sum= sum+remainder;
      q=q/10;
        }

        while (p!= 0)
        {
      long long remainder = p% 10;
         sum1= sum1+ remainder;
          p=p/10;
        }
   cout<<sum+sum1;
        }



        else
        {
         while (z != 0)
        {
     long long remainder = z% 10;
      sum       = sum + remainder;
      z= z/ 10;
        }
        while (s != 0)
   {
      long long remainder = s% 10;
         sum1= sum1+ remainder;
          s  = s / 10;
   }

    cout<<sum+sum1;;

        }



}
