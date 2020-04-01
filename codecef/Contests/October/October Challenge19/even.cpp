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
//#define mod 1000000007
#define MAXN 100001

void result_ans(int a[],int n,int m,set<int>ans[])
{
    int max1=INT_MIN;
    if(m%2==1)
        {

            int index=-1;
            
            for(int i=1;i<=n;i++)
            {
                if(a[i]%2==1)
                {
                    index=i;
                    break;
                }
            }
            if(index!=-1)
            {
                cout<<2<<endl;
                for(int i=1;i<=n;i++)
                {
                    if(i==index)
                    cout<<2<<" ";
                    else
                    cout<<1<<" ";
                    if(max1<=a[i])
                    max1=a[i];
                }
                cout<<endl;

            }
            else
            {
                int value1,value2;
                for(int i=1;i<=n;i++)
                {
                    if(ans[i].size()>0)
                    {
                        value1=i;
                        value2=*ans[i].begin();
                        break;
                    }
                }
                cout<<3<<endl;
                for(int i=1;i<=n;i++)
                {
                    if(i==value1)
                    cout<<2<<" ";
                    else if(i==value2)
                    cout<<3<<" ";
                    else
                    cout<<1<<" ";
                    if(max1<=a[i])
                    max1=a[i];
                }
               // cout<<2<<" "<<3<<" ";
                cout<<endl;
            }
        }
        else
        {
            cout<<1<<endl;

            for(int i=1;i<=n;i++)
            {
                cout<<1<<" ";
                if(max1<=a[i])
                    max1=a[i];
            }
            cout<<endl;
        }

}
int main() 
{
    int t;
    cin>>t;
    int mod=100001;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int x,y;
        int a[mod]={0};
        set<int>ans[n+2];
        for(int i=0;i<m;i++)
        {
        cin>>x>>y;
        ans[x].insert(y);
        a[x]++;
        a[y]++;
        } 
        result_ans(a,n,m,ans);
    }
}
