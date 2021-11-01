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
       vector <vector <char> > chess(n,vector <char>(n,'.'));
       chess[1][1] = 'Q';
       for(int i=3;i<n;i++){
          chess[i][i] = 'Q';
       }

       for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            cout << chess[i][j];
         }

         cout << endl;
       }


    }
    return 0;
    }