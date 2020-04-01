#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
        cin>>a[i];
    for(int i=0;i<n2;i++)
        cin>>b[i];

    int c[n1+n2];
    int i=0,j=0,index=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
            c[index++]=a[i++];
        else
            c[index++]=b[j++];
    }
    while(i<n1)
        c[index++]=a[i++];
    while(j<n2)
        c[index++]=b[j++];

    for(int k=0;k<(n1+n2);k++)
        cout<<c[k]<<endl;
}

