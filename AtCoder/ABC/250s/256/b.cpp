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
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i,n){
        cin >> A.at(i);
    }
    int sum = 0;
    int sub_cnt = 0;
    for(int i = n-1;i >=0;i--){
        sum += A.at(i);
        if(sum >= 4)break;
        sub_cnt++;
    }
    cout << n-sub_cnt << endl;
    return 0;
}
