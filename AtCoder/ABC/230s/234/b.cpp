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
    vpii x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i].first >> x[i].second;
    }
    vector<double> len;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            len.push_back(sqrt(pow(x[i].first-x[j].first,2)+pow(x[i].second-x[j].second,2)));
        }
    }
    sort(len.begin(), len.end());
    cout.precision(10);
    cout << len[len.size()-1] << endl;

    return 0;
}