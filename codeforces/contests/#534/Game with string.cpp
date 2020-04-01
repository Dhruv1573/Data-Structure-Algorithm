#include <iostream>
#include <string.h>
using namespace std;

string  removeDup(string str, long n)
{
    long len = n;
    long k = 0, i=0,count=0,count1=0; // To store index of result


    for (long i=1; i< len; i++)
    {

        if (str[i-1] != str[i])
        {
            str[k++] = str[i-1];
            count++;
        }


        else
            while (str[i-1] == str[i])
            {
                i++;
                count1++;
            }

    }

    // Add last character and terminator
    str[k++] = str[i-1];
    str[k] = '\0';

    // If all characters were unique
    if((count+i)%2==0)
        return "Yes";
        else
        return "No";
     //return count+count1;
}

int main()
{
    string s;
    cin>>s;

    cout << removeDup(s, s.length()) << endl;
}
