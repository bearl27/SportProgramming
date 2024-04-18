#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define _USE_MATH_DEFINES
#include<math.h>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<stdio.h>
#include<string.h>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;

///////////////////////////////////////

int main(){
    string s;
    cin >> s;
    vector<string> v;
    for(int i = 0; i < s.size(); i++){
        string t = s.substr(i) + s.substr(0, i);
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    cout << v[0] << endl;
    cout << v[v.size() - 1] << endl;
    return 0;
}
