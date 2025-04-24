#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        if (N >= 4) {
            cout << (3 * N - 3) << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
