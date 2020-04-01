#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string str;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
        {
            vector<int>vect;
		cin>>str;
		//cin>>n;
		/*
		int p=log10(n)+1;
		while(p-->0)
        {
        int z=n%10;
		n/=10;
		//cout<<z<<endl;
		vect.push_back(z);

        }
        reverse(vect.begin(),vect.end());
        for(int i=0;i<vect.size();i++)
        {
            if(vect[i]<5)
                cout<<9-vect[i];
            else
                cout<<vect[i];
        }
        cout<<endl;
        */
		for(int i=0;i<str.length();++i)
		{
			if(str[i]<'5')
				cout<<9-(str[i]-'0');
			else
				cout<<str[i];
		}
		cout<<endl;

	}
	return 0;
}
