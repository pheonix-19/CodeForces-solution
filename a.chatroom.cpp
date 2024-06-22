#include<bits/stdc++.h>
using namespace std;
int main(){
    int j= 0 ,c=0;

    string s;
    cin>>s;
    string k="hello";
    for(int i = 0 ; i < s.length() ; i++) 
       if( s[i] == k [j]){ 
        c++;
        j++;
        if(c==5) { break;}
       }   
     if(c == 5) cout<<"YES";
     else cout<<"NO";    
}
