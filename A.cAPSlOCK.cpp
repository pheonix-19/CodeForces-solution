#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool istrue = true;
    int size =s.size();
    for(int i = 1 ; i<size;i++){
        if(s[i]>=97){
            istrue =false;
            break;
        }
    }
    if(istrue){
        for(int i = 0 ; i<size ; i++){
            if(s[i]>=97){
                s[i] =s[i]-32;

            }
            else{
                s[i] = s[i]+32;
            }
        }
        cout<<s;
    }
    else{
        cout<<s;
    }
    return 0;
}