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
    string s[3];
    for(int i = 0; i < 3;i++)cin >> s[i];
    string t;
    cin >> t;
    string ans = "";
    for(char a:t){
        switch(a){
            case '1':
                ans += s[0];
            break;
            case '2':
                ans += s[1];
            break;
            default:
                ans += s[2];
        }
    }
    cout << ans << endl;
    return 0;
}
