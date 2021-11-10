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
       int x,y,a,b,k;
       cin >> x >> y >> a >> b >> k;
       int petrol = x+(k-1)*a;
       int diesel = y+(k-1)*b;

       if(petrol<diesel){
           cout << "PETROL" << endl;
       }
       else if(petrol>diesel){
           cout << "DIESEL" << endl;
       }
       else{
           cout << "SAME PRICE" << endl;
       }

    }
    return 0;
    }