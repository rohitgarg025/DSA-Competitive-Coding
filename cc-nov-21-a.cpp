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
        if(n < 100){
            cout << "Easy" << endl;
        }
        else if(n<200){
            cout << "Medium" << endl;
        }
        else{
            cout << "Hard" << endl;
        }
    }
    return 0;
    }