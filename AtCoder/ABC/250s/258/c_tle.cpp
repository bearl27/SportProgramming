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
    int n,q;
    cin >> n >> q;
    string A;
    cin >> A;
    //do
    rep(i,q){
        int t,f;
        cin >> t >> f;
        if(t == 1){
            A = A.substr(A.size()-f) + A.substr(0,A.size()-f);
            // //debug
            //cout << A << endl;
        }else{
            cout << A[f-1] << endl;
        }
    }

    return 0;
}
