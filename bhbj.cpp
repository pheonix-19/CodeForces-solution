#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    int sum  = 0;
	    for(int  i = 0 ; i < n ; i++ ){
	        
	     cin>>a[i];
	     sum+=a[i];
	    } 
	    int avg = sum/n;
	    if(avg >= m){
	        cout<<n<<endl;
	    }
	    else{
	    for(int i =1 ; i< n; i++){
	        if(sum/i == m){
	           cout<<i<<endl;
	         break;   
	        } 
	            
	        }
	    }
	    }
	    
	    
	


