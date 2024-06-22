#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string b;
        string f;
        cin>>b;
        cin>>f;
        int one = 0;
        
        int zero = 0;
        

       
        for(int  i = 0 ; i < n ; i++){
            if(b[i] == '1'&& f[i] == '0') one++;
            
            if(b[i] == '0'  && f[i]  == '1') zero++;
        }
        if( zero >  one) cout<<zero<<endl;
        else cout<<one<<endl;
       
    }

}