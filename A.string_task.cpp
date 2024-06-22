#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    vector<char>v;
    cin>>a;
    int s = a.size();
   
    for(int i = 0 ; i <= s ; i++){
        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'Y' || a[i] == 'y' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ){
            a[i] = '+';

        }
         if( a[i] != '+'){
            v.push_back(a[i]);
    
    } 
    }
    
    for (auto i = v.begin(); i != v.end()-1; ++i)
        cout << '.'<<(char)tolower(*i);


       

     }