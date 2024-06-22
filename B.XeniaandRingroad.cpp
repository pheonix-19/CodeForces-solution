#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int current = 1;
    long long time = 0;
    for(int i = 0  ;i < m ; i++){
        int present;
        cin>>present;

        if(present >= current) time += present - current;
        else time += n - (current - present);
        current = present;
    }
    cout<<time;
}