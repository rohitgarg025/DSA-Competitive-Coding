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
    vector <int> a(n,0);
    for(auto &it : a){
        cin >> it;
    }

    if(n == 1){
        cout << 0 << endl;
    }
    else{
        int num_odds = 0;
        for(auto it : a){
            if(it&1){
                num_odds++;
            }
        }

        if(num_odds <= 1){
            cout << 0 << endl;
        }
        else{
            cout << num_odds/2 << endl;
        }
    }

    }
    return 0;
    }