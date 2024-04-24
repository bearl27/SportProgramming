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
int janken(char a, char b){
    if(a == b){
        return 0;
    }else if(a == 'G' && b == 'C'){
        return 1;
    }else if(a == 'C' && b == 'P'){
        return 1;
    }else if(a == 'P' && b == 'G'){
        return 1;
    }else{
        return -1;
    }
}

vpii sort_vp(vpii vp){
    sort(vp.begin(), vp.end(), [](pii a, pii b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    });
    return vp;
}


int main(){
    int n,m;
    cin >> n >> m;
    string s;
    vector<string> v;
    pii p;
    vpii vp;


    for(int i = 0; i < 2 * n; i++){
        cin >> s;
        v.push_back(s);
        p.first = i;
        p.second = 0;
        vp.push_back(p);
    }


    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int a = vp[2 * j].first;
            int b = vp[2 * j + 1].first;
            int result = janken(v[a][i], v[b][i]);
            //cout << a << " " << b << " " << result << endl;
            if(result == 1){
                vp[2 * j].second++;
            }else if(result == -1){
                vp[2 * j + 1].second++;
            }
        }
        vp = sort_vp(vp);
        // for(int j = 0; j < 2 * n; j++){
        //     cout << vp[j].first;
        // }
        // cout << endl;
    }

    for(int i = 0; i < 2 * n; i++){
        cout << vp[i].first + 1 << endl;
    }



    return 0;
}
