#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 while(n--){
        int x[4];
        int y[4];
        vector<int>distance;
        for(int i = 0 ; i < 4 ; i++){
           cin>>x[i]>>y[i];
           
        } 
         

        for(int i = 1 ; i < 4 ; i++){
           int d;
           d = sqrt((pow((abs(x[0] - x[i])),2) + pow((abs(y[0] - y[i])),2)));
           distance.push_back(d);

        }
        sort(distance.begin(),distance.end());
        cout<<distance[0]*distance[1]<<endl;
    }}
