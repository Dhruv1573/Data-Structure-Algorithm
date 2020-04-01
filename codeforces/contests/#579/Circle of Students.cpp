
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)

        {
            cin>>a[j];
        }
        int diff;
        vector<int>vect;
        for(int j=0;j<n-1;j++)
        {
            diff=abs(a[j]-a[j+1]);
            vect.push_back(diff);
        }
        int f=0;
        for(int j=0;j<vect.size();j++)
        {
            if(vect[j]>1 && vect[j]!=n-1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
