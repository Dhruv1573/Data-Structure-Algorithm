#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
       int n,count=0;
       cin>>n;
      int arr[n+1]={0};
       for(int i=0;i<n;i++)
       {
        int a;
        cin>>a;
        if(a<=n)
        arr[a]++;
      }
      for(int i=1;i<=n;i++)
      {
         if(arr[i]==0)
            count++;
      }
      cout<<count<<endl;
    }
    int count2=0;
    if(count2==0)
    {
        int m=2;
        int b[m]={1};


    }

return 0;
}
