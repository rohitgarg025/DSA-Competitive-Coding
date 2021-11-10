#include <bits/stdc++.h>
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int

using namespace std;
//Print cheaper fuel
int main(){
    
    FAST_IO;

    int t;
    cin >> t;
    while(t--){
       int x,y;
       cin >> x >> y;
       if(x <= 1 && y <= 1){
           cout << "NO" <<endl;
           return 0;
       }

       if(x & 1){
           cout << "NO" << endl;
       }
       else{
           cout << "YES" << endl;
       }

    }
    return 0;
    }