#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            if(n<=2)
                cout<<a[0]*2<<endl;
            else
            {

        int maximum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(a[i]>maximum)
            {
                maximum=a[i];
            }
        }
        vector<int>maxi;
        vector<int>nonmaxi;
        for(int i=0;i<n;i++)
        {
           if(a[i]==maximum)
            maxi.push_back(a[i]);
           else
            nonmaxi.push_back(a[i]);
        }

        int resulta=maxi[0],resultb=nonmaxi[0];
        for(int i=0;i<maxi.size();i++)
        {
            resulta=__gcd(maxi[i],resulta);
        }
        for(int i=0;i<nonmaxi.size();i++)
        {
            resultb=__gcd(nonmaxi[i],resultb);
        }
        int suma=resulta+resultb;





        int secondmaxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(a[i]>secondmaxi && a[i]!=maximum)
                secondmaxi=a[i];
        }
       // cout<<secondmaxi<<endl;
       vector<int>second;
       vector<int>nonsecond;
       for(int i=0;i<n;i++)
       {
           if(a[i]==secondmaxi)
            second.push_back(a[i]);
            else
                nonsecond.push_back(a[i]);
       }


        int resultc=second[0],resultd=nonsecond[0];
        for(int i=0;i<second.size();i++)
        {
            resultc=__gcd(second[i],resultc);
        }
        for(int i=0;i<nonsecond.size();i++)
        {
            resultd=__gcd(nonsecond[i],resultd);
        }
        int sumb=resultc+resultd;


        if(suma>=sumb)
            cout<<suma<<endl;
        else
            cout<<sumb<<endl;

       // for(int i=0;i<second.size();i++)
         //   cout<<second[i]<<endl;

            }
    }
}
