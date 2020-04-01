
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arr[660000]={1};
   arr[2]=1;

       for(int i=0;i<660000;i++)
          arr[i]=1;

   for(int i=2;i*i<660000;i++)
   {
       if(arr[i]==1)
       {


       for(int j=2*i;j<660000;j=j+i)
        {
            arr[j]=0;

        }
       }
      
   }
   // printing of prime_num...
   vector<long long > vect;
   int count = 0;
    for(int i = 2;i < 660000;i++)
        {
            if(arr[i])
            vect.push_back( i );
        }



       // cout<<vect.size();
    vector<long long> num;

    for(int i=3;i<vect.size()-6;i = i+3)
    {
    num.push_back(vect[i]);
    num.push_back(2);
    num.push_back(vect[i+1]);
    num.push_back(3);
    num.push_back(vect[i+2]);
    num.push_back(5);
    }



    vector<long long >ans;

    for(int i = 0;i < num.size()-1; i++)
    {
       ans.push_back(num[i]*num[i+1]);

    }


  // cout<<ans.size()<<" "<<ans[ans.size()-1]<<endl;

  int t;
  cin>>t;
 for(int i=0;i<t;i++)
  {
      int n;
      cin>>n;



     for(int i = 0;i < n-2; i++)
     cout<<ans[i]<<" ";
     if(ans[n-1]%2==0 && ans[n-2]%2==0)
     {
          cout<<(ans[n-2]/2)*3<<" "<<(ans[n-1]/2)*3*7;
     }
      else if(ans[n-1]%2==0)
      cout<<ans[n-2]<<" "<<(ans[n-1]/2)*7;

    else
    cout<<ans[n-2]<<" "<<ans[n-1]*7;
    cout<<endl;


  }

    return 0;
}
