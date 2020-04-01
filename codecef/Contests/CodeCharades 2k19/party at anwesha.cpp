#include<bits/stdc++.h>
using namespace std;
int main()

{
    long long t;
    cin>>t;
    long long n;
    for(long long i=0;i<t;i++)
    {
        cin>>n;
        int count=0;
        while(n>1)
        {
            if(n%2==0)
                n=n/2;
            else
            n=ceil(n/2)+1;

            //cout<<n<<endl;
            count++;
        }
        cout<<count<<endl;
      //  long long z=n/2;
        //cout<<z<<endl;

    }
}
