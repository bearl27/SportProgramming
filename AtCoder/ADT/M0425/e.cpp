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

///////////////////////////////////////

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool quation_flag = false;
    string ans = "";
    for(auto c : s){
        if(c == '"'){
            quation_flag = !quation_flag;
        }else if(c == ','){
            if(quation_flag){
                ans += ",";
            }else{
                ans += ".";
            }
        }else{
            ans += c;
        }
    }
    cout << ans << endl;
}
