// UNIQUE NUMBER - III
// We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

// Input Format
// First line contains the number n. Second line contains n space separated number.

// Constraints
// N < 10^5

// Output Format
// Output a single line containing the unique number

// Sample Input
// 7
// 1 1 1 2 2 2 3

// Sample Output
// 3

// Code
#include <iostream>
using namespace std;

int findUniq(int arr[], int n)
{
  int cnt[64] = {0};
  for (int i = 0; i < n; i++)
  {
    int j = 0;
    int num = arr[i];
    while (num > 0)
    {
      cnt[j] += num & 1;
      j++;
      num >>= 1;
    }
  }
  int p = 1;
  long ans = 0;
  for (int i = 0; i < 64; i++)
  {
    cnt[i] %= 3;
    ans += cnt[i] * p;
    p = p << 1;
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << findUniq(arr, n);
  return 0;
}