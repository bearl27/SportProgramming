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
#define rep1(i,n) for(int i = 1; i < (n); i++)

///////////////////////////////////////


int main(){
    int step;
    cin >> step;
    vpii menu(10000);
    if(step == 1){
        int menuKind;
        cin >> menuKind;

        rep(i,menuKind){
            int num,stock,price;
            cin >> num >> stock >> price;
            menu[num] = make_pair(stock,price);
        }
        while (!cin.eof()) {
            string order;
            int tableNum,menuNum,amount;
            cin >> order >> tableNum >> menuNum >> amount;
            if(menu[menuNum].first < amount){
                cout << "sold out "<< tableNum << endl;
            }else{
                menu[menuNum].first -= amount;
                rep(i,amount){
                    cout << "received order " << tableNum << " " << menuNum << endl;
                }
            }
        }
    }

    return 0;
}
