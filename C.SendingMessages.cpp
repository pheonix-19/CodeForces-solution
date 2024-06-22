#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,f,a,b;
        cin>>n>>f>>a>>b;
       long long int m[n+1]={0};
        for(int i = 1 ;i < n+1; i++) cin>>m[i];
        for(int i = 1 ; i < n+1 ; i++)  f-=min(a*(m[i]-m[i-1]),b);
        if(f > 0)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }}
