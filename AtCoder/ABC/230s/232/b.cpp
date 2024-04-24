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
    string s, t;
    cin >> s >> t;
    int n = (s[0] - t[0]+26)%26;
    string ans = "Yes";
    for(int i = 1; i < s.size(); i++){
        if(!(n ==  (s[i] - t[i]+26)%26)){
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}