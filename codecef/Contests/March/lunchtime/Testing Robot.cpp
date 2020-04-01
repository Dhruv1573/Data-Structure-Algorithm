#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        vector<int>vect;
        int y=1;
        for(int i=0;i<y;i++)
            vect.push_back(x);
       // vect[0].push_back(x);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                x--;
                vect.push_back(x);
                //count++;
            }
            else if(s[i]=='R')
            {
                x++;
                vect.push_back(x);

            }
        }
        int count=1,count1=0;
        sort(vect.begin(),vect.end());

            for(int j=0;j<vect.size()-1;j++)
            {
                 if(vect[j]!=vect[j+1])
                {
                    count++;

                }
        }
       cout<<count<<endl;
         //cout<<vect.size()-(count)<<endl;


    }

}
