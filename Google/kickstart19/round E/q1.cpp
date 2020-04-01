
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
    unordered_map<int,bool>mp;
    unordered_map<int,int>mp1;

	for(int i=1;i<=t;i++)
    {
        int l,r;
        cin>>l>>r;


      int count3=0;
      for(int j=l;j<=r;j++)
      {
          if(mp[j]==true)
          {
              count3++;
              continue;
          }
          if(mp1[j]==true)
            continue;
          if(j%8!=0|| j<100)
          {
               int count1=0,count2=0;
          for(int k=1;k<=sqrt(j);k++)
          {
              if(j%k==0)
              {
               if (j/k == k)
                {
                    if(k%2==0)
                        count1++;
                    else
                        count2++;
                }
            else
                {
                    if(k%2==0)
                        count1++;
                    else
                        count2++;
                    if((j/k)%2==0)
                        count1++;
                    else
                     count2++;
                }
              }

          }

          if(abs(count1-count2)<=2)
           {
            count3++;
            mp[j]=true;
           }
           else
           {
               mp1[j]=false;
           }
          }
          else
          {
              mp1[j]=false;
          }
      }

       cout<<"Case #"<<i<<": "<<count3<<endl;
    }
	return 0;
}

