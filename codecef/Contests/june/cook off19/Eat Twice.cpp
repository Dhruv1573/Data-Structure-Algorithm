/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int arr[n]={0},brr[n]={0};
        for(int i=0;i<n;i++)
        {
            int d,v;
            cin>>d>>v;
            arr[i]=d;
            brr[i]=v;
        }
        long max1=INT_MIN,max2=INT_MIN,index;
        for(int i=0;i<n;i++)
        {
            if(brr[i]>max1)
            {
                max1=brr[i];
                index=i;
            }


            //if(brr[i]>max2 && max1!=brr[i])
        }
        for(int i=0;i<n;i++)
        {
            if(brr[i]>max2 && arr[index]!=arr[i])
            {
                max2=brr[i];
            }
        }
        cout<<max2+max1<<endl;

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
       int n,m;
       cin>>n>>m;
      vector< pair< int,int> > vect;
      for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            vect.push_back({b,a});
        }
     int max1=0;
     int max_index=0;

      for(int i=0;i<n;i++)
      {
          if(max1<vect[i].first)
          {
              max1=vect[i].first;
              max_index=vect[i].second;
          }
      }
  int max2=0;
    for(int i=0;i<n;i++)
    {
     if(max2<vect[i].first && vect[i].second!=max_index)
          {
              max2=vect[i].first;

          }
    }
 // cout<<max1<<" "<<max2<< endl;
    cout<<max1+max2<<endl;
   }


    }
