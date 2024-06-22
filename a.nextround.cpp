#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[100];
    int c =0 ;
    for(int i= 0 ; i < n ; i++){
        cin>>arr[i];
   
   }
int l = arr[k-1];
   for(int i= 0 ; i < n ; i++){
if(arr[i] >=  l && arr[i] > 0){
    c++;
}
   }  
    cout<<c<<endl;

}