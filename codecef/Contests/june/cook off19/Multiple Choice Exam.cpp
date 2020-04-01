/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s,u;
        cin>>s>>u;
        int count=0,count2=0;
        if(s[n-1]==u[n-1])
            count++;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==u[i])
                count++;
            else if((s[i]=='A' ||s[i]=='B'||s[i]=='C'||s[i]=='D')&& u[i]=='N')
                count+=0;
            else if(s[i]!=u[i])
            {
                count+=0;
                i+=1;

            }

        //cout<<count<<endl;
        }
        cout<<count<<endl;
    }
}

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,u;
        cin>>s>>u;
        int count=0,count2=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]==u[i])
                count++;
            else if(u[i]=='N')
                count+=0;
            else
            {
                i+=1;

            }

        //cout<<count<<endl;
        }
        cout<<count<<endl;
    }
}
