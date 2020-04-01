#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    cin.ignore();
     //fflush(stdin);
    for(int i=0;i<t;i++)
    {
       // getchar();
        string s;
        getline(cin,s);

       // cout<<s;
       s=s+" ";
       s=" "+s;
       //cout<<s;
       string s1(" not ");
       if(s.find(s1)!=string::npos)
        cout<<"Real Fancy"<<endl;
       else
       cout<<"regularly fancy"<<endl;


    /*
        int count=0;


        // string s1="not";
         int len=s.length();
        // cout<<s[len-1]<<s[len-2]<<s[len-3];
         for(int i=3;i<=len-3;i++)
         {
             if(s[i]=='n'&&s[i+1]=='o'&&s[i+2]=='t'&&s[i+3]==' ')
                count++;


         }
         if(count!=0 || (s[len-1]=='t'&&s[len-2]=='o'&&s[len-3]=='n'&& s[len-4]==' ')|| (s[0]=='n'&&s[1]=='o'&&s[2]=='t' &&s[3]==' ')||(s[0]=='n'&&s[1]=='o'&&s[2]=='t'))
            cout<<"Real Fancy"<<endl;
             else
                cout<<"regularly fancy"<<endl;

         /*
         int cnt=0;
    size_t pos = s.find("not ", 0);
    while(pos != string::npos)
    {
        cnt++;
        pos = s.find("not ", pos+1);
    }

     int cnt1=0;
    size_t pos1 = s.find(" not ", 0);
    while(pos1 != string::npos)
    {
        cnt1++;
        pos1 = s.find(" not ", pos1+1);
    }

   /*  int cnt2=0;
    size_t pos2 = s.find("not", 0);
    while(pos2 != string::npos)
    {
        cnt2++;
        pos2 = s.find(" not", pos2+1);
    }
    */
       /* if(s.find(s1))
           cout<<"Real Fancy"<<endl;
        else

            */
            /*
            if(cnt!=0||cnt1!=0)
                 cout<<"Real Fancy"<<endl;
            else
                cout<<"regularly fancy"<<endl;
                */
    }
}
