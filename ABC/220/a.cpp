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
    int a,b,c;
    cin >> a >> b >> c;
    int ans = -1;
    int mul = b/c;
    if(a%c == 0)ans = a;
    else if(b%c == 0)ans = b;
    else if(a/c != b/c)ans = c*mul;
    cout << ans << endl;
    return 0;
}
