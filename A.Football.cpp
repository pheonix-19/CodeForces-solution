#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<string, int>foot;
    while(t--){
        string s;
        cin>>s;
        foot[s]++;
         }
  int max = 0;
  string maxchar;
  map<string, int>::iterator i;
  for(i = foot.begin(); i != foot.end(); i++){
    if(max < i->second){
      max = i->second;
      maxchar = i->first;
    }
  }
  cout<<maxchar<<endl;   
}