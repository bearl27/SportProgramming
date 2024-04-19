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
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for(int i = 0; i < (n); i++)

///////////////////////////////////////

int main(){
    int ans = 1;
    vector<bool> a;
    while(true){
        while(true){
            if(!a[ans]){
                cout << ans << endl;
                a[ans] = true;
                ans++;
                break;
            }
            ans++;
        }
        int n;
        cin >> n;
        a[n] = true;
        if(n == 0){
            break;
        }
    }

    return 0;
}
