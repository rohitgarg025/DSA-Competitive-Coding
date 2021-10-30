/*

https://www.geeksforgeeks.org/maximize-cost-of-deletions-to-obtain-string-having-no-pair-of-similar-adjacent-characters/#

*/

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find maximum cost to
// remove consecutive characters
int Maxcost(string s, int cost[])
{
	// Initialize the count
	int count = 0;

	// Maximum cost
	int maxcost = 0, i = 0;

	// Traverse from 0 to len(s) - 2
	while (i < s.size() - 1)
	{
		// If characters are identical
		if (s[i] == s[i + 1])
		{
			// Add cost[i] if its maximum
			if (cost[i] > cost[i + 1])
				maxcost += cost[i];

			// Add cost[i + 1]
			// if its maximum
			else
			{
				maxcost += cost[i + 1];
				cost[i + 1] = cost[i];
			}
		}
	
		// Increment i
		i += 1;
	}

	// Return the final max count
	return maxcost;
}

// Driver Code
int main()
{
	// Given string s
	string s = "abaac";

	// Given cost of removal
	int cost[] = {1, 2, 3, 4, 5};

	// Function Call
	cout << Maxcost(s, cost);
	return 0;
}
// This is code contributed by gauravrajput1
