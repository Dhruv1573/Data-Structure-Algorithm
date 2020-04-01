#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    vector<int>arr;
    bool ans=true;
    while(a!=0)
    {
        int r=a%10;
        a=a/10;
        arr.push_back(r);
    }
    sort(arr.begin(),arr.end());

      do
      {
        int  sum=0;
        for(int j=0;j<arr.size();j++)
        {
            sum=(sum*10 )+ arr[j];
        }
        if (sum>=b)
           {
               ans=false;
               cout<<sum<<endl;
               break;
           }
  } while ( std::next_permutation(arr.begin(),arr.end()) );

  if (ans)
  cout<<"-1"<<endl;

}
