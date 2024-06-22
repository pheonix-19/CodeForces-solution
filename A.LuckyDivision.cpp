#include<bits/stdc++.h>
using namespace std;
int lucky(int n){
    int c,b =0,temp;
    temp = n;
    while(temp){
    c = temp%10;
    if(c==4||c==7){
        b=1;
    }
    else{
        b=0;
        break;

    }
    temp = temp/10;
    }
    return b;
}
int main(){
int n;
cin>>n;
int c = 0;
if(lucky(n) == 1){
    c++;
}
else{
    for(int  i = 1 ;  i < n ; i++){
        int r = lucky(i);
        if(r == 1){
            if(n % i == 0){
                c++;
            }
        }
    }
}
    if(c != 0){
        
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
