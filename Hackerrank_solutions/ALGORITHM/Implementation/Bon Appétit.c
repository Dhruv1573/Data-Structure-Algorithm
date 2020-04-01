#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,k,count=0,temp;
    scanf("%d %d",&n,&k);
    
    	for(int i=0;i<n;i++)
        {
            
		scanf("%d",&temp);
		
		if(i != k) 
        {
			count += temp;
		}
	}
    
    int val;
	scanf("%d",&val);

	if(val == (count/2))
		printf("Bon Appetit\n");
	else
		printf("%d\n",val-(count/2) );
    
    return 0;
}