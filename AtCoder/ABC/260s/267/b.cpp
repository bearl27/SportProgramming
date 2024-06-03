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
#include<queue>
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
    string pins;
    cin >> pins;
    vector<int> pin(10);
    rep(i, 10){
        pin[i] = pins[i] - '0';
    }
    //debug
    // rep(i, 10){
    //     cout << pin[i] << " ";
    // }
    // cout << endl;

    if(pin[0] == 1){
        cout << "No" << endl;
        return 0;
    }
    vector<int> row(7);
    row[0] = pin[6];
    row[1] = pin[3];
    row[2] = pin[1] + pin[7];
    row[3] = pin[0] + pin[4];
    row[4] = pin[2] + pin[8];
    row[5] = pin[5];
    row[6] = pin[9];
    for(int i = 1; i < 6; i++){
        if(row[i] == 0){
            if(row[i-1] != 0 && row[i+1] != 0){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
