#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<string>a;
    for(int i = 0 ; i < n-1 ; i++){
        string k ="";
        k+=s[i];
        k+=s[i+1];
        a.insert(k);
    }
    cout<<a.size()<<endl;

}
}