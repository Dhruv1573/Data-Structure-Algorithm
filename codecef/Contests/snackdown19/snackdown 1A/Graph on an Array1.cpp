
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int m;
    cin>>m;
    int arr[m];
    int maximum=0;
    int brr[51]={0};

    for(int i=0;i<m;i++)
        {
            cin>>arr[i];
            if(maximum<arr[i])
                maximum=arr[i];
                brr[arr[i]]++;
        }

    int prime[15]={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37,  41, 43, 47};

            int x =47;
        for(int i=14;i>=0;i--)
        {
            if(brr[prime[i]]==0)
            {
                x=prime[i];

                break;
            }
        }

    vector<vector <  int > > graph(maximum +1);

  for(int i=0;i<m;i++)
  {

      for(int j=i+1;j<m;j++)
      {
          if(__gcd(arr[i],arr[j])==1)
          {
              graph[arr[i]].push_back(arr[j]);
              graph[arr[j]].push_back(arr[i]);
          }

      }
  }



 queue<int>q;
 bool visited[maximum +1]={false};

for(int i=0;i<graph[arr[0]].size();i++)
 {
     q.push(graph[arr[0]][i]);

 }

visited[arr[0]]=true;
 while(!q.empty())
 {
     int s=q.front();
     q.pop();
     if(!visited[s])
     {
         visited[s]=true;
         for(int j=0;j<graph[s].size();j++)
         {
             q.push(graph[s][j]);
         }
     }
 }

 int position,i;
 for( i=0;i<m;i++)
 {
     if(visited[arr[i]]==false)
     {
         position=i;
         break ;
     }
 }
 if(i==m)
   {
       cout<<0<<endl;
   }
 else
   {
       cout<<1<<endl;
       arr[position]=x;
   }
   for(int k=0;k<m;k++)
   {
       cout<<arr[k]<<" ";
   }
   cout<<endl;

}    return 0;
}
