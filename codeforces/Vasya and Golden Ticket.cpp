#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int  s;
    //int a[n];
    cin>>s;

  //int sum=0,count=0,maximum=0;

    vector<int>vect;
    if(s!=0)
    {

    int z=log10(s)+1;
   // cout<<z;

    for(int i=0;i<z;i++)
    {
        int p=s%10;

        vect.push_back(p);
        s/=10;
       // cout<<vect[i]<<" ";
    }
    sort(vect.begin(),vect.end());
    int q=vect[z-1],count=0;
  //  cout<<q;
    for(int i=0;i<z;i++)
    {
        if(q==vect[i]+vect[i+1])
            count++;
    }
if(z>4)
{

if(count!=0)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
else
{
         for(int i=0;i<z;i++)
        if(vect[i]==vect[i+1])
        {

           cout<<"YES"<<endl;
           break;

        }
       else
       {
          cout<<"NO"<<endl;
          break;
       }
    }
    }
    else
        cout<<"YES"<<endl;
}
