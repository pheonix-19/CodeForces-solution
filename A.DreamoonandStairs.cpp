#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if(n < m) {
        cout << "-1\n";
    } else {
        int min_moves = (n + 1) / 2; // Dreamoon can climb 1 or 2 steps at each move
        int result = (min_moves + m - 1) / m * m; // make the number of moves a multiple of m

        if(result > n) {
            cout << "-1\n";
        } else {
            cout << result << "\n";
        }
    }

    return 0;
}