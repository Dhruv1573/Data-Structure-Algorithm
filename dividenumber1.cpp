
// C/C++ program to find maximum product by breaking
// the Integer
#include <bits/stdc++.h>
using namespace std;

// method return x^a in log(a) time
int power(int x, int a)
{
    int res = 1;
    while (a)
    {
        if (a & 1)
            res = res * x;
        x = x * x;
        a >>= 1;
    }
    return res;
}

// Method returns maximum product obtained by
// breaking N
int breakInteger(int N)
{
    //  base case 2 = 1 + 1
    if (N == 2)
        return 1;

    //  base case 3 = 2 + 1
    if (N == 3)
        return 2;

    int maxProduct;

    //  breaking based on mod with 3
    switch (N % 3)
    {
        // If divides evenly, then break into all 3
        case 0:
            maxProduct = power(3, N/3);
            cout<<maxProduct;
            break;

        // If division gives mod as 1, then break as
        // 4 + power of 3 for remaining part
        case 1:
            maxProduct = 2 * 2 * power(3, (N/3) - 1);
            break;

        // If division gives mod as 2, then break as
        // 2 + power of 3 for remaining part
        case 2:
            maxProduct = 2 * power(3, N/3);
            break;
    }
    return maxProduct;
}

//  Driver code to test above methods
int main()
{
    int maxProduct = breakInteger(2);
    cout << maxProduct << endl;
    return 0;
}
