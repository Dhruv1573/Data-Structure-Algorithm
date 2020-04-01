
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    return (a>b)?a:b;
}
int max(int a,int b,int c)
{
    return max(max(a,b),c);
}
int subarraysum(int arr[], int l, int m, int h)
{

    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = m; i >= l; i--)
    {
        sum = sum + arr[i];
        if (sum > left_sum)
          left_sum = sum;
    }


    sum = 0;
    int right_sum = INT_MIN;
    for (int i = m+1; i <= h; i++)
    {
        sum = sum + arr[i];
        if (sum > right_sum)
          right_sum = sum;
    }


    return left_sum + right_sum;
}


int maxsubarraysum(int arr[], int l, int h)
{

   if (l == h)
     return arr[l];


   int m = (l + h)/2;


   return max(maxsubarraysum(arr, l, m),
              maxsubarraysum(arr, m+1, h),
                subarraysum(arr, l, m, h));
}



int main()
{

    int n;

    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    //int start=0,last=n-1;
    //int mid=(start+last)/2;

    //int z=subarraysum(arr,start,mid,last);
    cout<<maxsubarraysum(arr,0,n-1);
}
