#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n ;i++){
        cin>>a[i];

    }
    vector<int>v;

    for(int i = 0 ; i<n ;i++){
        v.push_back(a[i]+a[i+1]);
    }
    int c = 0;

    for(int i = 0 ; i<v.size() ;i++){
        if(v[i] == v[i+1]){
            c++;
        }
        }

     if(c ==n/2 || n==1||n==2){
        cout<<"yes"<<endl;
     }
     else{
        cout<<"no"<<endl;
     }
    }

}

