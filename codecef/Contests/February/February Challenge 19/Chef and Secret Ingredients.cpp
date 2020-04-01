#include <bits/stdc++.h>
using namespace std;

const int maxc = 26;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,count=0;
        cin>>n;
        string str[n];
        for(int i=0;i<n;i++)
        {

            cin>>str[i];
        }
        bool first[maxc];
        memset(first,true,sizeof(first));
        //cout<<first;
       // for(int i=0;i<maxc;i++)
      //   cout<<first[i];

        for(int i=0;i<n;i++)
        {
            bool sec[maxc]={false};
            for(int j=0;str[i][j];j++)
                {
                if(first[str[i][j]-'a'])
                {
                    sec[str[i][j]-'a']=true;
                  //  cout<<str[i][j]<<" ";
                 //cout<<sec[j];
                }
                }
		memcpy(first,sec,maxc);
        }

	//count words
		for (int i=0;i<26;i++)
		if (first[i])
            count++;
            cout<<count<<endl;

    }

	return 0;
}
