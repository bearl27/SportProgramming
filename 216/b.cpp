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
    int n;
    cin >> n;
    map<string,int> mp;
    string s,t,ful;
    string ans = "No";
    for(int i = 0; i < n;i++){
        cin >> s >> t;
        ful = s+t;
        mp[ful]++;
        if(mp[ful] > 1){
            ans = "Yes";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
