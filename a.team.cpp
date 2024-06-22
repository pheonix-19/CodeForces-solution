#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int c = 0;
    while(t--){
        int sum = 0;
        int arr[3];
        for(int i = 0 ; i < 3 ; i++){
            cin>>arr[i];
            sum = sum + arr[i];
        }
        if(sum >= 2){
            c++;
        }

    }
    cout<<c<<endl;
}