#include<bits/stdc++.h>
using namespace std;



int main()
{
	string s ;
	cin>>s;

	vector<string>vect;
		for (int i = 0; i <s.length(); i++)
		for (int len = 1; len <=s.length()-i; len++)
            vect.push_back(s.substr(i, len));
			//cout << s.substr(i, len) << endl;



			string s1,s2;
			int count=0;
			vector<string> vect2;
			for(int i=0;i<vect.size();i++)
            {

              for(int j=0;j<vect.size();j++)
              {
                  s1=vect[i]+vect[j];
                  vect2.push_back(s1);
                 //  s2=s1;
                   //reverse(s2.begin(),s2.end());
                  // cout<<s1<<" "<<s2<<endl;
                   //if(s1.compare(s2)==0)
                    //count++;

              }
            }
            for(int i=0;i<vect2.size();i++)
            {
                cout<<vect[i]<<endl;
                count++;
            }


         //  vect2.erase(unique(vect2.begin(), vect2.end()), vect2.end());

           // cout<<count<<endl;
			//cout<<vect[i]<<endl;
	return 0;
}
