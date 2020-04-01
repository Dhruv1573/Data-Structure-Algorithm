#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    string s;
    cin>>s;
    int b[10]={0};
    for(int i=0;i<n;i++)
    {
        int a=s[i]-'0';
        b[a]++;
    }
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(b[i]%2!=0)
        count++;
    }
    cout<<count;
    return 0;
}

