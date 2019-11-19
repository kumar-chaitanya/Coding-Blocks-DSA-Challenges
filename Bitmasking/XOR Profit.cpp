// XOR PROFIT PROBLEM
// We are given two coins of value x and y. We have to find the maximum of value of a XOR b where x <= a <= b <= y.

// Input Format
// We are given two integers x and y

// Constraints
// l <= r <= 1000

// Output Format
// Print the maximum value of a XOR b

// Sample Input
// 5
// 6

// Sample Output
// 3

// Code
#include <iostream>
using namespace std;

int findMaxProfit(int x, int y)
{
  int ans = 0;
  for (int i = x; i < y; i++)
  {
    ans = ((i ^ y) > ans) ? (i ^ y) : ans;
  }
  return ans;
}

int main()
{
  int x, y;
  cin >> x >> y;
  cout << findMaxProfit(x, y);
  return 0;
}