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

int main()
{
    string s;
    cin >> s;
    bool f1 = true;
    bool f2 = true;
    bool f3 = true;
    string t1 = "oxx";
    string t2 = "xox";
    string t3 = "xxo";
    for(auto i = 0; i < s.size(); i++){
        if(t1[i%3] != s[i])f1 = false;
        if(t2[i%3] != s[i])f2 = false;
        if(t3[i%3] != s[i])f3 = false;
        if(!f1 && !f2 && !f3){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
