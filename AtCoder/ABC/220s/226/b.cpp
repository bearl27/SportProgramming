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
    int n;
    cin >> n;
    vector<int> a;
    map<vector<int>, int> map;
    for(int i = 0; i < n; i++){
        int l;
        cin >> l;
        for(int j = 0; j < l; j++){
            int b;
            cin >> b;
            a.push_back(b);
        }
        map[a]++;
        a.clear();
    }

    cout << map.size() << endl;

    return 0;
}
