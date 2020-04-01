#include<bits/stdc++.h>
using namespace std;

// Return the sum of distance of one axis.
int distancesum(int arr[], int n)
{

    // for each point, finding the distance.
    int res = 0, sum = 0;
    for (int i = 0; i < n; i++)
        {
        res += (arr[i] * i - sum);
        sum += arr[i];
    }

    return res;
}

int totaldistancesum(int x[], int y[], int n)
{
    return distancesum(x, n) + distancesum(y, n);
}


int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        int m, n;
        cin>>m>>n;
        vector< pair<int , int > >vect;
        string arr[m];

        for(int i=0;i<m;i++)
            cin>>arr[i];
        for(long i=0;i<m;i++)
           {
               for(int j=0;j<n;j++)
                 {

                     if(arr[i][j]=='1')
                        vect.push_back({i,j});
                 }
           }


        long ans[m+n]={0};
        sort(vect.begin(),vect.end());
        for(int i=0;i<vect.size()-1;i++)
        {
            for(int j=i+1;j<vect.size();j++)
              {
                  int dist=abs(vect[i].first-vect[j].first) + abs(vect[i].second - vect[j].second);

                    ans[dist]++;
              }
        }
        for(int i=1;i<m+n-1;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }


return 0;

}






