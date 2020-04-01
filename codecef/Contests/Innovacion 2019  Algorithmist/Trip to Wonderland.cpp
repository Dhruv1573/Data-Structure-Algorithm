#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        vector<int>vect;
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(max<a[i])
                max=a[i];

            int z=a[i]/((a[i]%k)+2);

                vect.push_back(z);

         //   cout<<vect[i];
        }
        int max1=INT_MIN;
        for(int i=0;i<vect.size();i++)
        {
            if(max1<vect[i])
                max1=vect[i];
        }
       // cout<<max1;
       // cout<<max;
    }


}
