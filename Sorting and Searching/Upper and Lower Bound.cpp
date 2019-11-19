// FIND UPPER AND LOWER BOUND
// Find position of the last and first occurrence of a given number in a sorted array. If number not exist then print lower and upper bound as -1.

// Input Format
// An integer n denoting the size of the array followed by n integers denoting array elements Followed by T testcases Each testcase contains integer x (whose positions are to be found)

// Output Format
// Lower bound position followed by upper bound position separates by space in each line

// Sample Input
// 5
// 1 2 3 3 4
// 3
// 2
// 3
// 10

// Sample Output
// 1 1
// 2 3
// -1 -1

// Code
#include <iostream>
#include <algorithm>
using namespace std;

int lower(int arr[], int n, int key)
{
  int s, e, m, ans;
  s = 0;
  e = n - 1;
  ans = -1;

  while (s <= e)
  {
    m = (s + e) / 2;

    if (arr[m] == key)
    {
      ans = m;
      e = m - 1;
    }
    else if (arr[m] > key)
    {
      e = m - 1;
    }
    else
    {
      s = m + 1;
    }
  }

  return ans;
}

int upper(int arr[], int n, int key)
{
  int s, e, m, ans;
  s = 0;
  e = n - 1;
  ans = -1;

  while (s <= e)
  {
    m = (s + e) / 2;

    if (arr[m] == key)
    {
      ans = m;
      s = m + 1;
    }
    else if (arr[m] > key)
    {
      e = m - 1;
    }
    else
    {
      s = m + 1;
    }
  }

  return ans;
}

int main()
{
  int n, tc, x;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);

  cin >> tc;

  while (tc--)
  {
    cin >> x;
    cout << lower(arr, n, x) << ' ' << upper(arr, n, x) << endl;
  }

  return 0;
}
