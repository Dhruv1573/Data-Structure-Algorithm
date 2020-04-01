#include<bits/stdc++.h>
using namespace std;



int main()
{

    long long int n;
    cin>>n;

    long long int arr[n];

    for(long long int i=0;i<n;i++)
    {

        cin>>arr[i];

    }

    long long int res=0,z;
    while(1)
    {
  l1:  for(long long int i=0;i<n;i++)
    {

        arr[i]=arr[i]-res++;

        if(arr[i]<=0)
        {

            z=i+1;
            goto l;
        }
    }
    goto l1;

}
    l: cout<<z;
}
