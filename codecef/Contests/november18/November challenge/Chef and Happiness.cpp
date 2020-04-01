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

   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int n;
       cin>>n;
       int arr[n+1];
       int init[n+2]={false};
       bool ans=false;
       vector<vector<int> >a(n+2);
       for(int i=1;i<n+1;i++)
       {
            cin>>arr[i];
            a[arr[i]].push_back(i);
            init[arr[i]]=true;
       }

       for(int i=0;i<n+2;i++)
       {
           if(a[i].size()>=2)
           {
                for(int j=0;j<a[i].size();j++)
                {
                    for(int k=j+1;k<a[i].size();k++)
                    {
                        if(init[a[i][j]] && init[a[i][k]])
                        {
                            ans=true;
                            break;
                        }
                    }
                    if(ans)
                        break;
                }
           }
           if(ans)
            break;
           

       }

       if(ans)
        cout<<"Truly Happy"<<endl;
       else
        cout<<"Poor Chef"<<endl;

   }
    return 0;
}
