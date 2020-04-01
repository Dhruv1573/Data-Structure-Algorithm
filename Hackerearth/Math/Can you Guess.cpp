#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        long sum=0;
        vector<long>vect;
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
                sum+=i;

        }
        /*for(int i=1;i<vect.size();i++)
        {

          // cout<<vect[i]<<" "<<endl;
            sum+=vect[i];
        }*/
        cout<<sum<<endl;
    }
}
