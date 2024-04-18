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
    int x,y;
    cin >> x >> y;
    int ans = y-x;
    if(ans < 0){
        cout << 0 << endl;
        return 0;
    }
    if(ans % 10 == 0){
        ans /= 10;
    }else{
        ans /= 10;
        ans++;
    }
    cout << ans << endl;

    return 0;
}