#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        for(i=2;i<=n-1;i=i+k)
        {
            arr[i]=0;
        }


    }
    int count=0,count1=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==1)
            count++;
        else if(arr[i]==-1)
            count1++;

    }
    int z=-count1;
    cout<<abs(count-z);

}

