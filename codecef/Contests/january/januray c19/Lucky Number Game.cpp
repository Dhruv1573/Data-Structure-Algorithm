#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n,a,b;
    for(int i=0;i<t;i++)
    {
        long long alice_count=0,bob_count=0,count=0;
        cin>>n>>a>>b;
        long long A[n],B[n];
        for(long long i=0;i<n;i++)
        {
            cin>>A[i];
            //counting values that appear in array
            if(A[i]%a==0&&A[i]%b==0)
            {
                count++;
                A[i]=-1;
            }

           else if(A[i]%a==0)
           {
                bob_count++;
                A[i]=-1;
           }

            else if(A[i]%b==0)
            {
                alice_count++;
                A[i]=-1;
            }

        }
        bob_count=bob_count+count;
        alice_count=alice_count+count;
        //output
        if(alice_count>bob_count)
                cout<<"ALICE"<<endl;
            else if(alice_count<bob_count)
                cout<<"BOB"<<endl;
                else if(alice_count==bob_count && alice_count%2==0)
                    cout<<"ALICE"<<endl;
                else if(alice_count==bob_count && bob_count%2!=0)
                        cout<<"BOB"<<endl;



}
}


