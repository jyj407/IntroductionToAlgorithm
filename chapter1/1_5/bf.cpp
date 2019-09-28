#include <iostream>
using namespace std; int main() {
    int n = 1808;
    int coin1 = 15;
    int coin2 = 23;
    int coin3 = 29;
    int coin4 = 41;
    int coin5 = 57;
    int count = 0;
    for (int i = 0; i <= n / coin1; i++) {
        for (int j = 0; j <= n / coin2; j++) {
            for (int k = 0; k <= n / coin3; k++) {
                for (int l = 0; l <= n / coin4; l++) {
                    for (int m = 0; m <= n / coin5; m++) {
                        if (i * coin1 + j * coin2 + k * coin3 + l *coin4 + m * coin5 == n) {
                            count++;
                            cout << "i = " << i << ", j = " << j << ", k =" << k << ", l = " << l << ", m =" << m << endl;
                        }
                    }
                }
            }
        }
    }
    cout << "Total combination " << count << endl;
    return 0;
}
