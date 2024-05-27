#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int anum = 0, bnum = 0;
    int a_low_b = 0;

    while (anum < n && bnum < m) {
        if (a[anum] < b[bnum]) {
            a_low_b++;
            anum++;
            if (a_low_b == 2) {
                cout << "Yes" << endl;
                return 0;
            }
        } else {
            a_low_b = 0;  // reset
            bnum++;
        }
    }
    if(n - anum >= 2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}