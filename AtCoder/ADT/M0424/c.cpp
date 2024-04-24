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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> char_vec;
    for(char c : s){
        char_vec.push_back(c);
    }
    for(int plus = 1; plus <= n-1; plus++){
        int count = 0;
        for(int i = 0; i < n-1;i++){
            if(i+plus > n-1) break;
            /////
            //cout <<char_vec[i] << char_vec[i+plus]<< endl;
            if(char_vec[i] != char_vec[i+plus]){
                count++;
            }else break;
        }
        cout << count << endl;
    }

    return 0;
}
