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
    //入力
    int n,k;
    cin >> n >> k;

    string s;
    //各文字列の文字数をカウント

    rep(i,n){
        cin >> s;
        for(auto c: s){
            dp[i][c]++;
        }
    }

    int now=0;





    return 0;
}
