#include<bits/stdc++.h>
using namespace std;

bool Array(const std::vector<int>& a) {
    int n = a.size();
    
  
    if (n < 3) {
        return true;  
    }
    
  
    int sum = a[0] + a[1];
    
   
    for (int i = 2; i < n; i++) {
        if (a[i] != sum) {
         
         
            std::sort(a.begin(), a.end());
            if (a[i] != sum) {
                return false;  
                
            }
        }
    }
    
    return true;  
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
        }

    
    
    if (Array(a)) {
        std::cout << "The array is ok." << std::endl;
    } else {
        std::cout << "The array is not ok." << std::endl;
    }
    

}
}