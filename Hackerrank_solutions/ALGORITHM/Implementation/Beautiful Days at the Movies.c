#include<stdio.h>

  int rev(int n)
  {
    int tmp = 0;
    while(n != 0)
    {
        tmp *= 10;
        tmp += n % 10;
        n /= 10;
    }
    return tmp;
}
int main() 
{
    int a,b,k,cnt = 0;
   scanf("%d%d%d",&a,&b,&k);
    for(int i = a; i <= b; i++)
        
        if(abs(i-rev(i))%k == 0)
            cnt++;
    printf("%d",cnt);
    return 0;
}
    