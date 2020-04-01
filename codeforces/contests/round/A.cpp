#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
  vector<int>arr(n);

    for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
  bool changed[n];
   for(int i=0;i<n;i++)
     changed[i]=false;
   int neg=0;
   int pos=0;
   for(int i=0;i<n;i++)
   {
        if(abs(arr[i])%2==1)
       {
       if(arr[i]>0 )
          pos++;
          if(arr[i]<0)
           neg++;
       }
       else
       {
           arr[i]=arr[i]/2;
           changed[i]=true;
       }
   }

   if(pos%2==0 )
   {
       bool flor=false;

       for(int i=0;i<n;i++)
       {
           if(flor==false)
           {
               if(arr[i]%2==1 && arr[i]>0 && changed[i]==false)
                {
                arr[i]=floor((float(arr[i]))/2);
                changed[i]=true;
                flor=true;
               }
           }
           else
           {
               if(arr[i]%2==1 && arr[i]>0 && changed[i]==false)
                {
                arr[i]=ceil((float(arr[i]))/2);
                changed[i]=true;
                flor=false;
               }
           }
       }
   }
       if(neg%2==0 )
   {
       bool flor=false;

       for(int i=0;i<n;i++)
       {
           if(flor==false)
           {
               if(arr[i]%2!=0 && arr[i]<0 && changed[i]==false)
                {
                arr[i]=floor((float(arr[i]))/2);
                changed[i]=true;
                flor=true;
               }
           }
           else
           {
               if(arr[i]%2!=0 && arr[i]<0 && changed[i]==false)
                {
                arr[i]=ceil((float(arr[i]))/2);
                changed[i]=true;
                flor=false;
               }
           }
       }
   }

   if(pos%2!=0 )
   {
       bool flor=false;

       for(int i=0;i<n;i++)
       {
           if(flor==false)
           {
               if(arr[i]%2==1 && arr[i]>0 && changed[i]==false)
                {
                arr[i]=floor((float(arr[i]))/2);
                changed[i]=true;
                flor=true;
               }
           }
           else
           {
               if(arr[i]%2==1 && arr[i]>0 && changed[i]==false)
                {
                arr[i]=ceil((float(arr[i]))/2);
                changed[i]=true;
                flor=false;
               }
           }
       }
   }
   if(neg%2!=0 )
   {
       bool flor=true;

       for(int i=0;i<n;i++)
       {
           if(flor==false)
           {
               if(arr[i]%2!=0 && arr[i]<0 && changed[i]==false)
                {
                arr[i]=floor((float(arr[i]))/2);
                changed[i]=true;
                flor=true;
               }
           }
           else
           {
               if(abs(arr[i])%2!=0 && arr[i]<0 && changed[i]==false)
                {
                arr[i]=ceil((float(arr[i]))/2);
                changed[i]=true;
                flor=false;
               }
           }
       }
   }
   //cout<<pos<<" "<<neg<<endl;
       for(int i=0;i<n;i++)
         cout<<arr[i]<<endl;

     // cout<<accumulate(arr.begin(),arr.end(),0);
}
