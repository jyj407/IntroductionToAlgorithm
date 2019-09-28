#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// FIXME, this DP memoization was wrong, need to fix it.
const int N = 808;
const int coin1 = 15;
const int coin2 = 23;
const int coin3 = 29;
const int coin4 = 41;
const int coin5 = 57;
vector<int> memo(N + 1, INT_MIN);


int recursion(int n) {
    if (n == 0){
        return 1;
    } else if (n < 0) {
        return 0;
    }

    if (memo[n] != INT_MIN) {
        return memo[n];
    }

    cout << "Current n " << n << endl;
    memo[n] = recursion(n - coin1) + recursion(n - coin2) +
        recursion(n - coin3) + recursion(n - coin4) + recursion(n - coin5);
    cout << "Current memo[n] " << memo[n] << endl;
    return memo[n];
}

using namespace std; int main() {
    int count = recursion(N);
    cout << "Total combination " << count << endl;
    return 0;
}
