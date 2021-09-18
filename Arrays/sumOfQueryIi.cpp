/*
Sum of Query II 
Medium Accuracy: 84.58% Submissions: 1880 Points: 4
You are given an array arr[] of n integers and q queries in an array queries[] of length 2*q containing l, r pair for all q queries. You need to compute the following sum over q queries.

 

Array is 1-Indexed.

Example 1:

Input: n = 4
arr = {1, 2, 3, 4}
q = 2
queries = {1, 4, 2, 3}
Output: 10 5
Explaination: In the first query we need sum 
from 1 to 4 which is 1+2+3+4 = 10. In the 
second query we need sum from 2 to 3 which is 
2 + 3 = 5.
*/

class Solution {
  public:
    vector < int > querySum(int n, int arr[], int q, int queries[]) {
      //code here
      //create a newArray first
      vector < int > v;
      int a[n + 1] = {
        0
      };

      //first element is already 0
      int sum = 0;
      for (int i = 1; i <= n; i++) {
        a[i] = arr[i - 1] + a[i - 1];
      }

      //we have filled the array

      for (int i = 1; i <= 2 * q; i += 2) {
        int l = queries[i - 1];
        int r = queries[i];

        int ans = (a[r] - a[l - 1]);
        v.push_back(ans);
      }
      return v;
    }
};
