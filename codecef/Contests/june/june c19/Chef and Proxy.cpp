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
        string s;
        cin>>s;
        int countp=0,counta=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='P')
                countp++;

        }
        if((double)(countp)/(double)(n)>=0.75)
            cout<<0<<endl;
        else
        {
       // cout<<countp<<endl;
        for(int i=2;i<n-2;i++)
        {
            if(s[i]=='A')
                {
                    if((s[i-1]=='P'||s[i-2]=='P')&&(s[i+1]=='P'||s[i+2]=='P'))
                    {
                        counta++;
                       // cout<<counta<<endl;
                    }
                }
                    if((double)(counta+countp)/(double)(n)>=0.75)
                    {
                      //  cout<<(double)(counta+countp)/(double)(n)<<endl;
                        cout<<counta<<endl;
                        break;
                    }

            }
        }
            if((double)(counta+countp)/(double)(n)<0.75)
                    {
                      //  cout<<(double)(counta+countp)/(double)(n)<<endl;
                        cout<<-1<<endl;

                    }






    }

}
