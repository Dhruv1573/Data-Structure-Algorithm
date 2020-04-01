#include <bits/stdc++.h>
using namespace std;


int main() {


    long int arr[5];
    //long int sum[5];
    long int minimum=99999999999999;
    long int maximum=0;
    long int sum=0;
    for(int i = 0; i<5; i++)
    {
        scanf("%ld", &arr[i]);
        sum+=arr[i];
    }

    for(int i =0;i<=4;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
        if(arr[i]<minimum){
            minimum = arr[i];
        }

    }
    printf("%ld %ld",sum-maximum,sum-minimum);

    return 0;
}