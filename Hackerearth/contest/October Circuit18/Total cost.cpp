

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,s,t,k,x;
    cin>>p>>s>>t>>k>>x;
    int sum1=0,sum2=0;
    int count=0;
        for(int i=x;i>0;i--)
        {
            s--;
            if(s<t)
                sum2+=k;
            else
                sum1+=p;


        }
      //  cout<<(count+1)*p+(s-1)*k;
       //  cout<<count<<" "<<s;



           // sum1=(s-t)*p;


            //sum2=(x-t)*k;

   // cout<<sum1;
   // cout<<sum2;
    cout<<sum1+sum2;




}
