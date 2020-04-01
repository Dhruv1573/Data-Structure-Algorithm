#include<bits/stdc++.h>
using namespace std;
void diamond(int n)
{

    int space=n-1;

  for (int k=1;k<=n;k++)
  {
    for (int c=1;c<=space;c++)
      printf(" ");
    space--;

    for (int c=1;c<=2*k-1;c++)
      printf("%d",c);

    printf("\n");
  }

  space=1;

  for(int k=1;k<=n-1;k++)
  {
    for (int c=1;c<=space;c++)
      printf(" ");

    space++;

    for (int c=1;c<=2*(n-k)-1;c++)
      printf("*");

    printf("\n");
  }

}
int main()
{
    int n;
    cin>>n;

    int first=0,second=1,next;
    for(int i=1;i<=n;i++)
    {
        if(i<=1)
        next=i;
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
        diamond(next);
       // cout<<next<<endl;
        //next=i;
    }
}

