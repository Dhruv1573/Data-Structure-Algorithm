#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define x first
#define y second
typedef  pair<long,long> pii;
typedef vector<pair<long, long> > vpii;
int main()
{
    int n;
long long m,l,a;
cin>>n>>m>>l>>a;
long long pos[n],len[n];
vector<pair<long,long> > v(n);
for(long long i=0;i<n;i++)
{
    cin>>pos[i]>>len[i];
    v[i]={abs(pos[i]-len[i]/a),pos[i]+len[i]/a};
}
sort(v.begin(),v.end());
if(v[0].x<0 || v[n-1].y>l)
    {
        cout<<"No";
        return 0;
}

long long position=pos[0],posh=len[0],z;
for(long long i=1;i<n;i++)
{
    if(v[i].x<v[i-1].y )
    {   z=(a*(pos[i]-position)+len[i]+posh)/2;
        if(z<=m)
            {
                int q=0,r=21;
                if(z>=m)
                    q++;
                else q=1;
                for(int i=1;i<n;i++)
                {
                    q+=r;

                }
                position+=(z-posh)/a  ;
                posh=z ;
            }
        else
            {
                 cout<<"No";
                 return 0;

        }

    }
    else
    {
        position=pos[i];
         posh=len[i];
    }
  int count=0;
    if(len[i]==0)
        {
            count++;
        }


}
cout<<"Yes";
return 0;
}
