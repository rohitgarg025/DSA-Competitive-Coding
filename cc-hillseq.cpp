#include <bits/stdc++.h>
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define pb push_back

using namespace std;

int main(){
    
    FAST_IO;

    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    vector <int> a(n,0);
    map <int,int> umap;
    bool flag = false;
    for(auto &it : a){
        cin >> it;
        umap[it]++;
        if(umap[it] > 2){
            flag = true;
            break;
        }
    
    }
    if(n == 1){
        cout << a[0] << endl;
        continue;
    }
    else if(n == 2 && a[0] == a[1]){
        cout << -1 << endl;
        continue;
    }

    if(flag || umap.rbegin()->second > 1){
        cout << -1 << endl;
        continue;
    }
    else{
        vector <int> left;
        vector <int> right;

        for(auto it : umap){
            if(it.second == 2){
                left.pb(it.first);
            }
            
            right.pb(it.first);
            
        }

        sort(left.begin(), left.end());
        sort(right.begin(), right.end(), greater <int>());

            for(auto it : left){
                cout << it << " ";
            }
            
            for(auto it : right){
                cout << it << " ";
            }

            cout << endl;
    }





    

    }
    return 0;
    }