#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l = 1;
        int r = 1e9;
        int s = 0;
        vector<int>o;
        while(n--){
            int a,x;
            cin>>a>>x;
            if(a== 1) l = max(l,x);
            if(a==2 ) r = min(r,x);
            if(a==3) o.push_back(x);
            
        }
        for(int x : o) if(x >= l && x<=r) s++;
        cout<<max(r-l+1-s,0)<<endl;
    }
}