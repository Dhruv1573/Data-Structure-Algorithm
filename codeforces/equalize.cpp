#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;

    string a,b;

    cin>>n;
    cin>>a>>b;

    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==b[i])
            continue;

        else
        {
            if(a[i+1]==b[i+1])
                count++;
            else
            {
                if(a[i]!=a[i+1])
                    {
                    swap(a[i],a[i+1]);
                    count++;
                }

                else
                    count++;
            }
        }
    }

    if(a[n-1]!=b[n-1])
        count++;

    cout<<count;

    return 0;
}
