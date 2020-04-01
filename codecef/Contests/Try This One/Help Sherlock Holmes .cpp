#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    getline(cin,s);
    cin.clear();
    fflush(stdin);

    s.erase(remove(s.begin(),s.end(),' '),s.end());
    //cout<<s<<endl;
    int len=s.length();

    int row=floor(sqrt(len));
    int col=ceil(sqrt(len));
    char matrix[row][col];
    int k=0;
   // cout<<s[9]<<endl;
  /*  for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            matrix[i][j]=s[k];
    // cout<<i<<j<<endl;
        if(k==len-1)
            break;
            k++;


        }

    }
*/

    //cout<<s<<endl;
    int p=0;
    string str="";
    for(int i=0;i<col;i+=1)
    {
        for(int j=i;j<len;j+=col)
        {
        str+=s[j];

        }
        str+=" ";
    }

    cout<<str;
   /* if((row*col)>=len)
    {
        for(int i=0;i<row;i++)
        {
          for(int j=0;j<col;j++)
             {
                cout<<matrix[j][i];
                cout<<i<<j<<endl;
                p++;
                if(p==len)
                    break;


             }
        cout<<endl;
        }
    }
    */
   // cout<<len<<endl;
    //cout<<row<<col<<endl;
}


