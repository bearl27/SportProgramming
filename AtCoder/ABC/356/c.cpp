#include<iostream>
#include<vector>
using namespace std;
using ll = long long;

int countValidCombinations(int N, int M, int K, vector<vector<int>>& tests) {
    int count = 0;

    for (int bitmask = 0; bitmask < (1 << N); bitmask++) {
        bool isValid = true;

        for (const auto& test : tests) {
            int correctKeys = 0;

            for (int i = 0; i < test.size() - 1; i++) {
                if (bitmask & (1 << (test[i] - 1))) {
                    correctKeys++;
                }
            }

            if ((test.back() == 'o' && correctKeys < K) ||
                (test.back() == 'x' && correctKeys >= K)) {
                isValid = false;
                break;
            }
        }
        if (isValid) {
            count++;
        }
    }

    return count;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> tests(M);
    for (int i = 0; i < M; i++) {
        int Ci;
        cin >> Ci;
        tests[i].resize(Ci + 1);
        for (int j = 0; j < Ci; j++) {
            cin >> tests[i][j];
        }
        char Ri;
        cin >> Ri;
        tests[i][Ci] = Ri;
    }

    int result = countValidCombinations(N, M, K, tests);
    cout << result << endl;

    return 0;
}