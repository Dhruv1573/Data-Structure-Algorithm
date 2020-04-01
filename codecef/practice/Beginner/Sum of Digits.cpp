#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;

    int sum;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int z=log10(n)+1;
         vector<int> vect;
         //cout<<z;
          sum=0;
    for(int i=0;i<z;i++)
        {

        int p=n%10;

        vect.push_back(p);
        n/=10;
        //cout<<vect[i];
         sum+=vect[i];
}
  cout<<sum<<endl;

    }
  //  cout<<sum;
}
