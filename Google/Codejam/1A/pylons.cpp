#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int r,c;
       cin>>r>>c;
       if(r==c)
        cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
        else
        {
            int arr[r+1][c+1]={0};
            for(int i=1;i<=r;i++)
            {
                //int p=0,q=0;
                for(int j=1;j<=c;j++)
                {


                    if(p!=i && q!=j && p-q!=i-j && p+q!=i+j)
                        cout<<i<<" "<<j<<endl;
                  //  p++;
                   // cout<<arr[i][j];

                }
                //q++;
            }
            //cout<<"Case #"<<i+1<<": POSSIBLE"<<endl;
         /*   for(int i=1;i<=r;i++)
            {
                for(int j=1;j<=c;j++)
                {
                    if(arr[i][j]==1)
                        cout<<i<<" "<<j<<endl;

                }
            }
            */

        }

   }
}
/*
//Submitted Code//
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int r,c;
       cin>>r>>c;
       if(r==c)
        cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
        else
        {
            int arr[r+1][c+1]={0};
            for(int i=1;i<=r;i++)
            {
                for(int j=1;j<=c;j++)
                {

                    arr[i][j]=1;
                   // cout<<arr[i][j];

                }
            }

            for(int i=1;i<=r;i++)
            {
                for(int j=1;j<=c;j++)
                {
                    if(arr[i][j]==1)
                        cout<<i<<" "<<j<<endl;

                }
            }



        }

   }
}
*/
