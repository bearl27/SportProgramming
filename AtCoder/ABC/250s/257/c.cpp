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
#define rep1(i,n) for(int i = 1; i <= (n); i++)

///////////////////////////////////////

int main(){
    //in
    int n;
    cin >> n;
    string s;//1 = adult 0 = child
    cin >> s;
    vpii W(n);
    int child_cnt = 0;
    int adult_cnt = 0;

    rep(i,n){
        cin >> W[i].first;
        W[i].second = s[i] - '0';
        if(W[i].second == 1) adult_cnt++;
    }

    //do
    sort(W.begin(),W.end());
    // //bebug
    // rep(i,n){
    //     cout << W[i].second << " " << W[i].first << endl;
    // }

    int ans = adult_cnt;
    bool same = true;
    rep(i,n){
        if(!same)ans = max(ans,child_cnt+adult_cnt);
        if(i < n)same = (W[i].first == W[i+1].first);
        if(W[i].second == 0){
            child_cnt++;
        }else{
            adult_cnt--;
        }
        // //bebug
        // cout << ans << endl;
    }
    ans = max(ans,child_cnt+adult_cnt);

    //out
    cout << ans << endl;

    return 0;
}
