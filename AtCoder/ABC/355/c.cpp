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
    ll n,t;
    cin >> n >> t;
    vector<ll> A(t);
    vector<ll> bingo_row(n);
    vector<ll> bingo_col(n);
    vector<ll> bingo_corss(2);
    for(ll i = 0;i < t; i++) cin >> A[i];
    for(ll i = 0;i < t; i++){
        int row = A[i]/n;
        int col = A[i]%n;
        row--;
        col--;
        if(row<0) row = n-1;
        if(col<0) col = n-1;
        bingo_row[row]++;
        bingo_col[col]++;
        if(row == col) bingo_corss[0]++;
        if(row == n-col-1) bingo_corss[1]++;
        if(bingo_row[row] == n || bingo_col[col] == n || bingo_corss[0] == n || bingo_corss[1] == n){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
