#include<bits/stdc++.h>
using namespace std;
int main()
{

   long int t;
    cin>>t;
   long int n;
    for(long int i=0;i<t;i++)
    {
        cin>>n;
        long sum=0;
        for(long int i=1;i<=n;i++)
        {
            if(n%i==0)
                sum++;
        }
        cout<<sum<<endl;

    }
}
