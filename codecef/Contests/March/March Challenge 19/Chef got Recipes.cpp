#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long n;
        cin>>n;
        string s;
        vector<int>v;
        vector<string>vect1;
        for(int i=0;i<n;i++)
        {

            cin>>s;
            int p=s.length();
            int c[27]={0};
                     for(int i=0;i<p;i++)
                        c[s[i]-'a'+1]++;

                    long f=0;
                    if(c[1]>0)
                        f+=32;
                    if(c[5]>0)
                        f+=16;
                    if(c[9]>0)
                        f+=8;
                    if(c[15]>0)
                        f+=4;
                    if(c[21]>0)
                        f+=2;

                    v.push_back(f);
                     // cout<<f<<endl;
                         //    for(int i=0;i<v.size();i++)
                           //         cout<<v[i]<<endl;




             //for(int i=0;i<27;i++)
                // cout<<c[i]<<" ";
                  //  cout<<endl;
        }
       // countPandigitalPairs(vect1);
            vector<vector<int>>vect_or(63);
            for(int i=0;i<63;i++)
            {
                for(int j=0;j<63;j++)
                {
                    if((i|j)==62)
                        vect_or[i].push_back(j);
                }
            }

            int count[63]={0};
            for(int i=0;i<n;i++)
            {
                count[v[i]]++;
            }
              //countPandigitalPairs(vect1);
            long final_ans=0;

            for(int i=0;i<n;i++)
            {
                int a=v[i];
                count[a]--;

                for(int j=0;j<vect_or[a].size();j++)
                {
                    final_ans+=count[vect_or[a][j]];

                }
                count[a]++;

            }

                cout<<final_ans/2<<endl;






    }
}
