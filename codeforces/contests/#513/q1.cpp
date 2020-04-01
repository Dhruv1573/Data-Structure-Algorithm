#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
        char s[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=='8')
        {

            count++;

        }

    }
    int ans=0;
     ans=n/11;
    if(ans>count)
    {
        ans=count;

    }
cout<<ans;

}

