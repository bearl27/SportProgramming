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
#define rep1(i,n) for(int i = 1; i <= (n); i++)

///////////////////////////////////////

int main(){
    //in
    int n,k,q;
    cin >> n >> k >> q;
    vector<bool>koma(n+1,false);
    vector<int> komaPos(k+1);
    rep1(i,k){
        cin >> komaPos[i];
        koma[komaPos[i]] = true;
    }

    //func
    rep1(i,q){
        int pos;
        cin >> pos;

        
        


        //一番右
        if(komaPos[pos]==n)continue;
        //次のコマがアキコマ
        if(koma[komaPos[pos]+1] == false){
            koma[komaPos[pos]] = false;
            koma[komaPos[pos]+1] = true;
            komaPos[pos]++;
        }
        
    }

    //out
    rep1(i,k){
        cout << komaPos[i];
        if(i == k){
            cout << endl;
        }else{
            cout << " ";
        }
    }

    // //
    // rep1(i,n){
    //     cout << koma[i];
    // }


    return 0;
}
