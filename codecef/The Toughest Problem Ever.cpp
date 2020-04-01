
#include<bits/stdc++.h>
using namespace std;

int main()
{
   long int n;
    cin>>n;
   long int a[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
      for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
        if(a[i]%3==0)
            count++;
        }
    }
    cout<<count;
}
