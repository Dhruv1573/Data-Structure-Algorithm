

#include<bits/stdc++.h>
using namespace std;

int main()
{
     long long t;
    cin>>t;
    long long n,k;
    for(long long i=0;i<t;i++)
    {
        cin>>n>>k;
              bool bob=false,alice=false;


            if(k==1)
            {
                if(n%2==0)
                {
                    alice=true;
                }
                else
                {
                    bob=true;
                }
            }
            else
            {
                long long j=1;
            while(true)
            {


                //long z=pow(k,j);
                j=j*k;
                n=n-j;
                if(n<0)
                {
                    alice=true;
                    break;

                }
               n=n-j;
                if(n<0)
                {

                    bob=true;
                    break;
                }

            }
            j++;
            }
               if(alice)
            cout<<"Bob"<<endl;
            if(bob)
            cout<<"Alice"<<endl;


     }
}
