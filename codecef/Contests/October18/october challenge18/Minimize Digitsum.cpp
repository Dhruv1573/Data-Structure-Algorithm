#include<bits/stdc++.h>
#include <iostream>
#include<cmath>
using namespace std;

 unsigned long long int power( unsigned long long int base, int exp )
{
    unsigned long long int result = 1ULL;
    while( exp )
    {
        if ( exp & 1 )
        {
            result *= (unsigned long long int)base;
        }
        exp >>= 1;
        base *= base;
    }
    return result;
}
int sumDigits(int n)
{
	int sum=0;

	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}

	return sum;
}

int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
    {
	long long int a,b,n,i,count=0;
  int ind;
	scanf("%lld%lld",&a,&b);

  unsigned long long int x = power(2,13);
  long long int arr[x];
  arr[1]=a;
 	i=1;
 	while(1)
	{
		arr[2*i]=arr[i]+b;
		arr[2*i+1]=sumDigits(arr[i]);
 		if((2*i+1)==(x-1))
			break;
		else
			i++;
	}
   long long min=arr[1];
   for(int i=2;i<x;i++)
    {
     if(min>arr[i])
        {
       min=arr[i];
     }
   }
  for(int i=1;i<x;i++)
    {
    if(arr[i]==min){
       ind=i;
       break;
    }
  }

  while(ind!=0)
    {

    if(ind%2==1)
        {
      ind= (ind-1)/2;
      count++;
    }
    else if(ind%2==0)
        {
      ind=(ind-2)/2;
      count++;
    }


  }


printf("%lld %lld\n",min,count);
 }

	return 0;
}
