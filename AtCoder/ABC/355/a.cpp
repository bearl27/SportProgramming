#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<iomanip>
#include<cstdio>
#include<cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i,n) for(int i = 1; i < (n); i++)

///////////////////////////////////////

int main(){
    int a,b;
    cin >> a >> b;
    int ans = -1;
    if(a == 1 && b == 2 || a == 2 && b == 1){
        ans = 3;
    }else if(a == 1 && b == 3 || a == 3 && b == 1){
        ans = 2;
    }else if(a == 2 && b == 3 || a == 3 && b == 2){
        ans = 1;
    }
    cout << ans << endl;
    return 0;
}
