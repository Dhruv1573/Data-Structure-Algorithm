
// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int l, int r)
{
    int start=l-1,end=r-1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/* Utility function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";

   cout << endl;
}

/* Driver function to test above functions */
int main()
{

    int t;
    cin>>t;
      int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int l,r;
    for(int i=0;i<t;i++)
    {
      cin>>l>>r;
      printArray(arr, 5);
        // Function calling
    rvereseArray(arr,l,r);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(arr, 5);
    }




    return 0;
}
