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
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for(int i = 0; i < (n); i++)

///////////////////////////////////////

int main(){
    string s;
    cin >> s;
    bool aFlag = true;
    bool bFlag = true;
    bool cFlag = true;

    for(char c:s){
        if(c == 'A'){
            if(!aFlag){
                cout << "No" << endl;
                return 0;
            }
        }
        if(c == 'B'){
            aFlag = false;
            if(!bFlag){
                cout << "No" << endl;
                return 0;
            }
        }
        if(c == 'C'){
            aFlag = false;
            bFlag = false;
            if(!cFlag){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
