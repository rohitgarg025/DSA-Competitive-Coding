#include <bits/stdc++.h>
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int

using namespace std;

int main(){
    
    FAST_IO;

    int t;
    cin >> t;
    while(t--){
       int k;
       cin >> k;
       int s = 1;
       int e = pow(10,9);

       while(s<e){
          int m = s + (e-s+1)/2;
          if((m*(m+1))/2+1 <=k){
             s = m;
          }
          else{
             e = m-1;
          }
       }
      
      // because s represents differences
      // so there will s+1 elements on any side
      // now for both sides, there will be 2*(s+1) elements
       cout << 2*(s+1) << endl;
    }
    return 0;
    }