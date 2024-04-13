#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define _USE_MATH_DEFINES
#include<math.h>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<stdio.h>
#include<string.h>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;

///////////////////////////////////////

int main(){
    string s;
    cin >> s;
    map<char, int> mp;
    for(auto c : s){
        mp[c]++;
    }
    map<int, int> mp2;
    for(auto p : mp){
        mp2[p.second]++;
    }
    string ans = "Yes";
    for(auto p : mp2){
        if(!(p.second == 0 || p.second == 2)){
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
