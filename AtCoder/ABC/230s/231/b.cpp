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
    int n;
    cin >> n;
    string name;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        cin >> name;
        mp[name]++;
    }
    int cnt = 0;
    for(auto x:mp){
        if(x.second > cnt){
            cnt = x.second;
            name = x.first;
        }
    }
    cout << name << endl;

    return 0;
}
