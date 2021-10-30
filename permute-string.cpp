#incude <bits/stdc++.h>
//Question Link: https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

using namespace std;

vector<string>find_permutation(string S)
		{
		    // Code here there
		    sort(S.begin(), S.end());
		    vector <string> ans;
		    do{
		        
		        ans.push_back(S);
		        
		    }while(next_permutation(S.begin(),S.end()));
		    
		    return ans;    
		    
		}
		
