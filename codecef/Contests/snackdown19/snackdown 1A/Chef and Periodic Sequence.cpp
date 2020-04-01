
#include<bits/stdc++.h>

using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int period=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=-1)
            {
                if(arr[i]==i+1)
                    continue;
                else
                {
                    period=i;
                    break;
                }
            }
        }

        if(period==-1)
            cout<<"inf"<<endl;

        else if(period==0)
            cout<<"impossible"<<endl;
        else
        {
            int i;
            for( i=0;i<n;i++)
            {
                if(arr[i]!=-1)
                {
                if(arr[i]==(i%period)+1)
                    continue;
                else
                    break;
                }

            }
            if(i==n)
                cout<<period<<endl;
            else
                cout<<"impossible"<<endl;
        }


    }


return 0;

}






