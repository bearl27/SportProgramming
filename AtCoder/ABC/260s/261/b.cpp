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
    int n;
    cin >> n;
    int V[n][n];
    rep(i,n){
        string s;
        cin >> s;
        rep(j,n){
            if(s[j] == 'W'){
                V[i][j] = 1;
            }else if(s[j] == 'L'){
                V[i][j] = -1;
            }else{
                V[i][j] = 0;
            }
        }
    }

    //do
    rep(i,n){
        rep(j,n){
            if(V[i][j] != -1*V[j][i]){
                cout << "incorrect" << endl;
                return 0;
            }
        }
    }

    //out
    cout << "correct" << endl;

    return 0;
}
