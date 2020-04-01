#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin>>n;

    int arr[n]={0};

    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=2*i;j<=n;j+=i)
                arr[j]=1;
        }
    }

    for(int i=2;i<=n;i++)
        if(arr[i]==0)
        cout<<i<<" ";
}
