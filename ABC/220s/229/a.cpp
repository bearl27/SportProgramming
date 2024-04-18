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



int main(){
    string s1,s2;
    cin >> s1 >> s2;
    if(s1 == "##" || s2 == "##" || s1 == s2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
