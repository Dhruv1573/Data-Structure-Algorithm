#include <stdio.h>

int main()
{
    int q;
    
    scanf("%d",&q);
    
    while(q--)
        
    {
        int cata,catb,mousec;
        
        scanf("%d %d %d",&cata,&catb,&mousec);
        
        cata=abs(cata-mousec);
        
        catb=abs(catb-mousec);
        
        		if(cata == catb)
			printf("Mouse C\n");
        
		else if(cata > catb)
			printf("Cat B\n");
        
		else
			printf("Cat A\n");
    }
    
    return 0;
}