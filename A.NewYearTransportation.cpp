#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i = 0 ; i < n ;i++) cin>>v[i];
    int pos = 1;
    while(pos<t){
        pos = pos + v[pos-1];
    }
    if(pos == t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}