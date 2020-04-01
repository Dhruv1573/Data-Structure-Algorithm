#include<bits/stdc++.h>
using namespace std;


long xorPairCount(vector<int>arr, int n, int x)
{
    long result = 0; // Initialize result


  //  unordered_map<int,int> s;

    unordered_map<int,int> s;

    for(int i=0;i<n;i++)
        s[arr[i]]++;

    for (int i=0; i<n ; i++)
    {
        int t;
          if(x==0)
         t=s[arr[i]^x]-1;
          else
             t=s[arr[i]^x];
        result=result+t;


    }

        // Make element visited




    // return total count of pairs with XOR equal to x
    return result/2;
}


int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      int n;
      cin>>n;
      int arr[n];
      vector<int>odd;
      vector<int>even;
      for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            if(arr[j]%2==0)
                even.push_back(arr[j]);
            else
                odd.push_back(arr[j]);
        }

  long ans=even.size()*(even.size()-1)/2 + (odd.size()*(odd.size()-1))/2;
  // cout<<ans<<" ";
      long zero=xorPairCount(even,even.size(),0) + xorPairCount(odd,odd.size(),0);
     // cout<<zero<<" ";

      long two=xorPairCount(even,even.size(),2) + xorPairCount(odd,odd.size(),2);
     // cout<<two<<" ";
     cout<<ans-zero-two<<endl;
  }
}
