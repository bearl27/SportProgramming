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
    map<string,int> mp;
    cin >> n;
    rep(i,n){
        string s;
        cin >> s;
        mp[s]++;
        if(mp[s] > 1){
            s = s + "(" + to_string(mp[s]-1) + ")";
        }
        cout << s << endl;
    }

    return 0;
}
