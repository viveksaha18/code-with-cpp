#include<bits/stdc++.h>
using namespace std;

/*
Questin : Count Good Numbers
A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).

For example, "2582" is good because the digits (2 and 8) at even positions are even and the digits (5 and 2) at odd positions are prime. However, "3245" is not good because 3 is at an even index but is not even.
Given an integer n, return the total number of good digit strings of length n. Since the answer may be large, return it modulo 109 + 7.

A digit string is a string consisting of digits 0 through 9 that may contain leading zeros.

 

Example 1:

Input: n = 1
Output: 5
Explanation: The good numbers of length 1 are "0", "2", "4", "6", "8".
Example 2:

Input: n = 4
Output: 400
Example 3:

Input: n = 50
Output: 564908303
 

Constraints:

1 <= n <= 1015
*/


// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
long long M = 1e9 + 7;
long long solve(long long a, long long b) {

    if(b == 0) return 1;
    long long half = solve(a, b/2);
    long long result = (half * half) % M;
    if(b % 2 == 1) result = (result * a) % M;
    return result;
}
    int countGoodNumbers(long long n) {
        return (long long) solve(5, (n+1)/2) * solve(4, (n/2)) % M;
    }
};
int main() {
    Solution sol;
    long long n = 50; // Example input
    cout << sol.countGoodNumbers(n) << endl; // Output: 564908303  
    return 0;
}