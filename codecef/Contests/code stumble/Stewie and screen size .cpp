#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long h,w,x,y;
    cin>>h>>w>>x>>y;

    long long r=__gcd(x,y);
    //cout<<r<<endl;
    x=x/r;
    y=y/r;
    long long ans1;
    long long ans2;
    long long a= h/x;
    long long length1=a*x ;
    long long breadth1=a*y;
    long long area1=length1 * breadth1;
   long long b=w/y;
   long long length2=b*x;
   long long breadth2=b*y;
   long long area2=length2* breadth2;

   if(area1>=area2 &&  breadth1<=w)
   {
       ans1=length1;
       ans2=breadth1;
   }
     if(area1<=area2 && breadth2>=w)
   {
       ans1=length1;
       ans2=breadth1;
   }
   if(area1<=area2 && breadth1<=w)
   {
       ans1=length2;
       ans2=breadth2;
   }
    if(area1>=area2 && breadth2>=w)
   {
       ans1=length2;
       ans2=breadth2;
   }
   if(h<x || h<y)
    cout<<0<<" "<<0;
   else
   cout<<ans1<<" "<<ans2;

    return 0;
}
