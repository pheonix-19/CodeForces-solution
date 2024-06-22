#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m; 
    if (m == 10) {
        if (n == 1) {
            cout << -1 << endl;
        } else {
            cout << 1;
            for (int i = 0; i < n - 1; i++) {
                cout << 0;
            }
            cout << endl;
        }
    } else {
        for (int i = 0; i < n; i++) {
            cout << m;
        }
        cout << endl;
    }
}