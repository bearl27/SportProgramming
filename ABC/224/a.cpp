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
    size_t n = s.size();
    if(s[n - 1] == 'r' && s[n - 2] == 'e'){
        cout << "er" << endl;
    }else{
        cout << "ist" << endl;
    }

    return 0;
}
