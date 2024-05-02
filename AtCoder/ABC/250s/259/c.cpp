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
    //in
    string s,t;
    cin >> s >> t;
    //do
    string ans = "Yes";
    int s_now = 0;
    rep(i,t.size()){
        if(s[s_now] == t[i]){
            s_now++;
        }else{
            if(s_now >= 2){
                if(s[s_now-1] == s[s_now-2] && s[s_now-1]==t[i]){
                    continue;
                }
            }
            ans = "No";
            break;
        }
    }
    if(s_now != s.size()){
        ans = "No";
    }

    //out
    cout << ans << endl;
    return 0;
}
