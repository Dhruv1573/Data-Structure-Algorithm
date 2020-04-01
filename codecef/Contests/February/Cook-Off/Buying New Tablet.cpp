#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define inf (long long int) 1e18
#define eps 0.000001
#define vl vector<ll>
#define sl set<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define mod 1000000007
#define MAXN 100001

int main()
{

    long t;
    cin>>t;
    long long n,b;
    for(long i=0;i<t;i++)
    {
        cin>>n>>b;
        long long w,a,p,count=0;
        long long arr[n],brr[n];
        for(long long i=0;i<n;i++)
        {
            cin>>w>>a>>p;

            arr[i]=w*a;

            brr[i]=p;
        }
        for(int i=0;i<n;i++)
           count++;
        long long sum=0,max=INT_MIN;
        for(long long i=0;i<n;i++)
        {
            if(brr[i]>b)
            {

                brr[i]=0;
                arr[i]=0;
            }
            else
            {
                if(max<arr[i])
                    max=arr[i];

            }
             sum+=brr[i];

        }
        if(sum==0)
            cout<<"no tablet"<<endl;
        else
            cout<<max<<endl;

        /*/
        cout<<sum;
        if(sum==0)
            cout<<"no tablet"<<endl;
        else
            cout<<max<<endl;
*/

    }
}
