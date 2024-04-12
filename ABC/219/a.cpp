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
    int x;
    cin >> x;
    int ans;
    if(x < 40)ans = 40-x;
    else if(x<70)ans = 70-x;
    else if(x<90)ans = 90-x;
    else{
        cout << "expert" << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}
