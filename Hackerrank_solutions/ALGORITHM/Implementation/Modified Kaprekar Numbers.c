
#include <stdio.h>

int main() {
   long long int  a,b,c=0;
    scanf("%d",&a);
    scanf("%d",&b);
 long long int count = 0;
    for (long long i = a; i <= b; i++) {
       long long int d = i * i;
        
      long long  int d1 = d;
        
      long long  int count1 = 0;
        
        while (d1)
        {
            d1 /= 10;
            count1++;
        }
        count1 += count1%2;

    long long power=10;
        
        for (long long k = 1; k < count1/2; k++) 
        {
            power *= 10;
        }
        long long int r = d % power;
        long long int l = d / power;
        if (r + l == i) 
        {
          printf("%lld ", i); 
          count++;
        }

    }

    if (count == 0) {
        printf("INVALID RANGE");
    }
    return 0;
}

