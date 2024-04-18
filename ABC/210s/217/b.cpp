
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


// int main(void) {
// 	int k = 0 + 'B' + 'R' + 'G' + 'H';
//     string str;
//     for(int i=0;i<4;i++){
//         cin >> str;
//         k -= str[1];
//     }
//     cout << "A" << (char)k << "C" << endl;
//     return 0;
// }

int main(){
    string str[4] = {"ABC","AGC","AHC","ARC"};
    map<string,int> mp;
    for(string i:str){
        mp[i]++;
    }
    string a;
    for(int i=0;i < 3;i++){
        cin >> a;
        mp[a]++;
        //cout << mp[a] << endl;
    }
    for(string i:str){
        if(mp[i] == 1)cout << i << endl;;
    }
    return 0;
}
