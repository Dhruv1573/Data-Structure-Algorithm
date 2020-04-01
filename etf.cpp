#include <iostream>
using namespace std;
int etf(int n)
{


			int result=n;
			for(int i=2;i*i<=n;i++)
			{
				if(n%i==0)
				{
					while(n%i==0)
						n/=i;
						result-=result/i;
				}
			}
			if(n>1)
            result-=result/n;
				//cout<<result<<endl;
				return result;

}
int main() {
	// your code goes here
		int t;
		cin>>t;
		int n;
		for(int i=0;i<t;i++)
		{
			cin>>n;

			cout<<etf(n)<<endl;
		}


	return 0;
}
