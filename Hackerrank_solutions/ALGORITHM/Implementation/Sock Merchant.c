#include <stdio.h>

int main() {
	int n,a,result=0;
    scanf("%d",&n);
	int arr[101] = {};
	for(int i = 0; i < n; i++) 
    {
        
        scanf("%d",&a);
        arr[a]++;
    }
    
	
	for(int i = 0; i <= 100; i++)
    
    {
         result += arr[i] / 2;
     }
	printf("%d",result);
    
	return 0;
}