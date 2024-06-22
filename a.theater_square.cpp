#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long l = n/a;
    long long k = m/a;
    if(n%a != 0){
        l++;
    }
    if(m%a != 0){
        k++;
    }
    cout<<l*k<<endl;
}