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
    string s;
    cin >> s;
    bool bigFlag = false , smallFlag = false;
    map<char, int> mp;
    for(auto c : s){
        mp[c]++;
        if(mp[c] == 2){
            cout << "No" << endl;
            return 0;
        }
        if(c >= 'A' && c <= 'Z'){
            bigFlag = true;
        }
        if (c >= 'a' && c <= 'z'){
            smallFlag = true;
        }
    }
    if(bigFlag && smallFlag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
