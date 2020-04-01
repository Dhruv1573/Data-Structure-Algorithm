/*#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int n,alice,bob;
    for(int i=0;i<t;i++)
    {
        cin>>n>>alice>>bob;
        int a[n];
        vector<int>vect;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(bob%alice==0 && alice<bob)
            {
                if(a[i]%alice==0)
                {
                    vect.push_back(a[i]);
                    a[i]=-1;
                }
            }
            else if(alice%bob==0 && bob<alice)
            {
                if(a[i]%bob==0)
                {
                    vect.push_back(a[i]);
                    a[i]=-1;
                }
            }
            else if(alice%bob!=0 || bob%!alice!=0)
            {

            }
            else if(alice==bob)
            {

            }


        }
        for(int i=0;i<vect.size();i++)
        {
            cout<<vect[i]<<" ";
        }
        cout<<endl;


    }
}
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    long long n,a,b;
    for(int i=0;i<t;i++)
    {
         long long alice_count=0,bob_count=0;
        cin>>n>>a>>b;
        long long A[n],B[n]={0};
        for(long long i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]%a==0)
            {
                A[i]=-1;
                //B[i]=A[i];
                bob_count++;
            }

            if(A[i]%b==0)
            {
                A[i]=-1;
                //B[i]=A[i];
                alice_count++;
            }
        }
        /*for(int i=0;i<n;i++)
            cout<<B[i]<<endl;*/
            if(alice_count>bob_count)
                cout<<"ALICE"<<endl;
            else if(alice_count<bob_count)
                cout<<"BOB"<<endl;
                 else if(alice_count==bob_count && alice_count%2==0)
                    cout<<"ALICE"<<endl;
                else if(alice_count==bob_count && bob_count%2!=0)
                        cout<<"BOB"<<endl;
            else
            {
                if(a==b)
                {
                        if(bob_count%2==0)
                    cout<<"BOB"<<endl;
                else if(bob_count%2!=0)
                    cout<<"ALICE"<<endl;
                }

            }

           /* int count=0,count1=0;
        for(int i=0;i<n;i++)
        {
            if(B[i]%a==0)
                count++;
            if(B[i]%b==0)
                count1++;

        }
        if(count%2==0 && count1%2!=0)
            cout<<"BOB"<<endl;
        else if(count1%2==0 && count%2!=0)
            cout<<"ALICE"<<endl;
    }
    */
}
}

