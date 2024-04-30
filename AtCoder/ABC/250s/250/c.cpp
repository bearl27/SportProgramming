#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <cstdio>
#include <utility>
#include <set>
#include <list>
#include <cmath>
#include <iomanip>
#include <cstdio>
#include <cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
///////////////////////////////////////

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> ballPlace(n + 1),posBall(n + 1);///ボールの場所，その場所のボール
    
    rep1(i, n)
    {
        ballPlace[i] = i;
        posBall[i] = i;
    }

    int swap_num[q];
    rep(i, q)
    {
        cin >> swap_num[i];
    }


    rep(i, q)
    {
        int current = ballPlace[swap_num[i]];
        int next = current;
        if(current == n){
            next = current - 1;
        }else{
            next = current + 1;
        }
        int currentBall = posBall[current];
        int nextBall = posBall[next];
        swap(posBall[current], posBall[next]);
        swap(ballPlace[currentBall], ballPlace[nextBall]);
    }

    rep1(i, n)
    {
        cout << posBall[i];
        if(i != n){
            cout << " ";
        }
    }
    cout << endl;
        
    return 0;
}
