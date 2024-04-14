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

int main(void)
{
    string s;
    cin >> s;
    map<char, int> mp;
    for(char c : s){
        mp[c]++;
    }
    if(mp.size() == 3){
        cout << 6 << endl;
    }else if(mp.size() == 2){
        cout << 3 << endl;
    }else{
        cout << 1 << endl;
    }

    return 0;
}
