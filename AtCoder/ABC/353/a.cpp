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
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    int cnt = 0;
    int nowNum = 0;
    rep(i,n){
        cin >> h[i];
    }

    //do
    rep(i,n){
        nowNum += h[i];
        if(i == n-1){
            cnt++;
            break;
        }
        if(nowNum >= k){
            nowNum = 0;
            cnt++;
        }else if(nowNum + h[i+1] > k){
            nowNum = 0;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;

}