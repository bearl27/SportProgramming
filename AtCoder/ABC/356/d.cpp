#include <iostream>
#include <bitset>
using namespace std;

const int MOD = 998244353;

int main() {
long long N, M;
cin >> N >> M;

long long result = 0;

for (int bit = 0; bit < 60; ++bit) {
    if ((M >> bit) & 1) {
        result += (N + 1) / 2;
    }
    result %= MOD;
}

cout << result << endl;

return 0;
}