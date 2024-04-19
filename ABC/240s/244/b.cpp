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
struct player{
    int x;
    int y;
    char d;
    player(int x, int y, char d) : x(x), y(y), d(d) {}
};

void move(player &p, char T){
    if(T == 'R'){
        if(p.d == 'N')p.d = 'E';
        else if(p.d == 'E')p.d = 'S';
        else if(p.d == 'S')p.d = 'W';
        else if(p.d == 'W')p.d = 'N';
    }else{
        if(p.d == 'N')p.y++;
        else if(p.d == 'E')p.x++;
        else if(p.d == 'S')p.y--;
        else if(p.d == 'W')p.x--;
    }
}

int main(){
    int n;
    cin >> n;
    string T;
    cin >> T;
    player p(0, 0, 'E');
    rep(i, n){
        move(p, T[i]);
    }
    cout << p.x << " " << p.y << endl;

    return 0;
}
