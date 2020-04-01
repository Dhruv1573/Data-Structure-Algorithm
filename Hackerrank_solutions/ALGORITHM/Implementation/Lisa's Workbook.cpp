
#include <bits/stdc++.h>

using namespace std;


int main()
{

    int n,k;

    cin>>n>>k;

    int arr[n],count=0,p=1;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

    }
    for(int i:arr)
    {
        //m=1;
        for(int j=1;j<=i;j++)
        {
            if(p==1)
                count++;
            if(j%k==0)
                p++;
        }
        if(i%k!=0)
            p++;


    }
    cout<<count;
}
