#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    int ans=0;
    int temp=0;
       for(int i=k;i<=n;i+=k)
        {
            if(n>=i&&n<=2*i)
            {
                temp=1;
                ans=i;
                break;
            }


        }
        if(temp==1)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;









}
