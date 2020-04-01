#include<bits/stdc++.h>
using namespace std;
#define n 200
int main()
{

      int arr[n]={0};
    vector<int>vect;
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=2*i;j<=n;j+=i)
                arr[j]=1;
        }
    }
     for(int i=2;i<=n;i++)
        {
        if(arr[i]==0)
            vect.push_back(i);

        }
       // for(int i=0;i<vect.size();i++)
         //  cout<<vect[i]<<endl;


           vector<int>vect1;
           for(int i=0;i<vect.size();i++)
           {
               for(int j=i+1;j<vect.size();j++)
               {
                   int pro=vect[i]*vect[j];
                   if(pro<n)
                    vect1.push_back(pro);
               }
           }
           vector<int>solution(1000);
            for(int i=0;i<vect1.size();i++)
            {
            for(int j=0;j<vect1.size();j++)
                {
                int z=vect1[i]+vect1[j];
            if(z<=n)
                solution[z]=1;
            }
            }


    int t;
    cin>>t;
  int m;
    for(int i=0;i<t;i++)
    {
        cin>>m;
        if(solution[m]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }


}
