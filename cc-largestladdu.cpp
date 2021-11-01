#include <bits/stdc++.h>
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int

using namespace std;

int main(){
    
    FAST_IO;

    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       ll a = INT_MAX;
       ll b = INT_MIN;
       for(int i=0;i<(int)pow(2,n);i++){
           ll x;
           cin >> x;
           a = min(a,x);
           b = max(b,x);
       }


       string ans = (abs(a-b) <= 1)?"YES":"NO";
       cout << ans << endl;
    }
    return 0;
    }