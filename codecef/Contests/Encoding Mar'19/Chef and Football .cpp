/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int score[n+1]={0};
    int six[n+1]={0};

  //  cout<<n*(n-1)/2<<endl;
    for(int i=0;i<(n*(n-1)/2);i++)
    {
        int winnerpoint=0;
        int t1,t2,p1,p2;
        cin>>t1>>t2>>p1>>p2;

        six[t1]=six[t1]+p1;
        //cout<<six[t1]<<endl;
        six[t2]=six[t2]+p2;

        if(p1>p2)
        {
            score[t1]=score[t1]+4;
        }
        else if(p2>p1)
        {
            score[t2]=score[t2]+4;
        }
        else
        {
            score[t1]=score[t1]+1;
            score[t2]=score[t2]+1;
        }
    }
        int max_score=INT_MIN,duplicate_score=0,duplicate_score_at,max_score_at,max_p=INT_MIN,max_p_at;
    for(int i=1;i<=n;i++)
    {
        if(max_score<=score[i])
        {
            max_score=score[i];
            max_score_at=i;

            if(max_p<six[i])
            {
                max_p=six[i];
                max_p_at=i;
            }
        }
        if(max_score==score[i])
        {
            duplicate_score++;
            duplicate_score_at=i;

            if(max_p<=six[i])
            {
                max_p=six[i];
                max_p_at=i;
            }
          //  cout<<i<<endl;
        }
       // cout<<score[i]<<endl;
    }
    if(duplicate_score==0)
        cout<<max_score_at;
    else
    {
            cout<<max_p_at;
    }
    //for(int i=1;i<=n;i++)
      //  cout<<six[i]<<endl;

}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long score[n+1]={0};
    long long six[n+1]={0};
    long long max=0,max_score_at,p=0;

  //  cout<<n*(n-1)/2<<endl;
    for(int i=0;i<(n*(n-1))/2;i++)
    {
        //int winnerpoint=0;
        long long t1,t2,p1,p2;
        cin>>t1>>t2>>p1>>p2;

        six[t1]=six[t1]+p1;
        //cout<<six[t1]<<endl;
        six[t2]=six[t2]+p2;

        if(p1>p2)
        {
            score[t1]=score[t1]+4;
        }
        else if(p2>p1)
        {
            score[t2]=score[t2]+4;
        }
        else if(p1==p2)
        {
            score[t1]=score[t1]+1;
            score[t2]=score[t2]+1;
        }
    }

    for(int i=1;i<n+1;i++)
    {
        if(score[i]>=max)
            max=score[i];
    }


    for(int i=1;i<n+1;i++)
    {
        if(score[i]==max && six[i]>p)
        {
            max_score_at=i;
            p=six[i];

        }
    }

        cout<<max_score_at;

    //for(int i=1;i<=n;i++)
      //  cout<<six[i]<<endl;

}
