#include <bits/stdc++.h>
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int

using namespace std;

int main(){
    
    FAST_IO;

    int t;
    cin >> t;
    while(t--){
       int a,b,p,q;
       cin >> a >> b >> p >> q;
       string ans = (p%a == 0 && q%b == 0 && (floor(p/a) == floor(q/b) or (abs(floor(p/a) - floor(q/b)) == 1)))?"YES":"NO";
       cout << ans << endl;
    }
    return 0;
    }