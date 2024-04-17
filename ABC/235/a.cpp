#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#define _USE_MATH_DEFINES
#include <math.h>
#include <queue>
#include <deque>
#include <stack>
#include <cstdio>
#include <utility>
#include <set>
#include <list>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using vi = vector<int>;
using vvi = vector<vector<int>>;

///////////////////////////////////////
int f(int n){
    return n * n + 2 * n + 3;
}

int main()
{   
    string s;
    cin >> s;
    int n0 = int(s[2]-'0');
    int n10 = int(s[1]-'0');
    int n100 = int(s[0]-'0');
    int num1 = n100*100+n10*10+n0;
    int num2 = n10*100+n0*10+n100;
    int num3 = n0*100+n100*10+n10;
    cout << num1 + num2 + num3 << endl;
    return 0;
}