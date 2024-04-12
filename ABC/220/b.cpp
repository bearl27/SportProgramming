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
ll f(string s,int k){
    ll ans = 0;
    for(char c:s){
        ans *= k;
        ans += c - '0';
    }
    return ans;
}

int main(){
    int k;
    string a,b;
    cin >> k;
    cin >> a >> b;
    ll a_ten = f(a,k);
    ll b_ten = f(b,k);
    cout << a_ten*b_ten << endl;
    return 0;
}
