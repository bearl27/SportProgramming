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

///////////////////////////////////////

int main()
{
    string s, t;
    cin >> s >> t;
    string ans = "No";
    size_t pos;
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    // lenght 2
    if (t[2] == 'x'){
        t = t.substr(0, 2);
        //cout << t << endl;
    }
    vector<size_t> v;
    for(char c : t){
        pos = s.find(c);
        if (pos == string::npos)
        {
            break;
        }
        //cout << c << pos << endl;
        v.push_back(pos);
        s = s.substr(pos + 1);
    }
    if (v.size() == t.size())
    {
        ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}
