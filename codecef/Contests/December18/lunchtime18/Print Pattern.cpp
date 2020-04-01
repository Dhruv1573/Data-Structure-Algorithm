#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    int n;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        int no=1;
        int arr[n][n]={0};
        int k=1;
        for(int i=0;i<n;i++)
        {
            int r=i;
            for(int j=0;j<n && r>=0;j++)
            {
             arr[j][r]=no;
             r--;
             no++;
            }

        }
        for(int i=1;i<n;i++)
        {

            int r=i;
            for(int j=n-1;j>=i;j--)
            {
                arr[r][j]=no;
                r++;
                no++;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}
