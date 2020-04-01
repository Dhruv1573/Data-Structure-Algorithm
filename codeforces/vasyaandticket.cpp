#include <iostream>
using namespace std;


int main()
{
    int n;
    string s;
    cin >> n >> s;

   // bool f=false;

     int sum = 0;
    for (int i = 0; i <n;i++)
        sum+=(s[i]-'0');
         //cout <<sum;

        if(sum==0)
        {
             cout << "YES";
            return 0;
        }

        int f=0;
        for(int i=1;i<sum;i++)
        {
            int temp=0;
            int ans=1;

            for(int j=0;j<n;j++)
            {
                temp+=(s[j]-'0');
                //cout<<temp;
                if(temp==i)
                    temp=0;

                    else if(temp>i)
                    {
                        ans=0;
                        break;

                    }
            }
            if(temp!=0)
                ans=0;
            if(ans==1)
            {
                f=1;
                break;
            }



        }

        if(f==1)
             cout << "YES";
        else
             cout << "NO";



}
