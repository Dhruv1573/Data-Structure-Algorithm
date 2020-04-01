#include <bits/stdc++.h>

using namespace std;


int main() {

      int n,k,i,count=0;
       cin>>n>>k;
    
      int a[n];
    for(i=0;i<n;i++)
    {
    cin>>a[i];
     }
    
    int b[k];
        for(i=0;i<k;i++)
        {
            b[i]=0;
            }
            for(i=0;i<n;i++)    
            {
                
                b[a[i]%k]+=1;

            }

            count=min(b[0],1);

    for(i=1;i<k/2+1;i++)
    {

        if(i!=k-i)
        {

            count+=max(b[i],b[k-i]);

        }

    }

    if(k%2==0) 
        
        count++;

    cout<<count;

    return 0;
}

