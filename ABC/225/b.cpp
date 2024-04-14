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
int map_max(map<int, int> map){
    int max = 0;
    for(auto p : map){
        if(p.second > max){
            max = p.second;
        }
    }
    return max;
}

int main(void)
{
    int n;
    cin >> n;
    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        map[a]++;
        map[b]++;
    }
    int max = map_max(map);
    if(max == n){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
