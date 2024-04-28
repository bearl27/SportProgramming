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
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first > b.first;
}

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    vpii origin;
    rep(i, n){
        string s;
        int x;
        cin >> s >> x;
        mp[s]++;
        if(mp[s] == 1){
            origin.push_back(make_pair(x, i));
        }
    }

    sort(origin.begin(), origin.end(),compare);


    // for(auto tmp:origin){
    //     cout << tmp.first << tmp.second << endl;
    // }

    cout << origin[0].second + 1 << endl;
    return 0;
}

