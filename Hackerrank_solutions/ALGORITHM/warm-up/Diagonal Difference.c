#include <stdio.h>

int main() 
{
int n,ldsum=0,rdsum=0;

scanf("%d", &n);
int a[n+1][n+1];
for(int i=1;i<=n;i++)
{ 
for(int j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);

if(i==j)
{
ldsum+=a[i][j];
}
}
} 
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
if(i+j==n+1)
{
rdsum+=a[i][j];

}
}
} 
printf("%d", abs(rdsum-ldsum));
return 0;
}