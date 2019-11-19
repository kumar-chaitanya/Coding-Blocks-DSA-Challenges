// BOOK ALLOCATION PROBLEM
// You are given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

// Input Format
// First line contains integer t as number of test cases. Next t lines contains two lines. For each test case, 1st line contains two integers n and m which represents the number of books and students and 2nd line contains n space separated integers which represents the number of pages of n books in ascending order.

// Constraints
// 1 < t < 50 1< n < 100 1< m <= 50

// Output Format
// Print the maximum number of pages assigned to students. (see input and output format)

// Sample Input
// 1
// 4 2
// 12 34 67 90

// Sample Output
// 113

// Code
#include <iostream>
using namespace std;

bool validConfig(int a[], int n, int mid, int m)
{
  int k = 1, aux = 0;

  for (int i = 0; i < n; i++)
  {
    if (aux + a[i] <= mid)
      aux += a[i];
    else
    {
      k++;
      aux = a[i];
      if (k > m)
        return false;
    }
  }
  return true;
}

int search(int a[], int n, int m)
{
  int s, e, mid, total = 0, ans = 0;
  for (int i = 0; i < n; i++)
  {
    total += a[i];
    s = max(s, a[i]);
  }

  e = total;

  while (s <= e)
  {
    mid = (s + e) / 2;
    if (validConfig(a, n, mid, m))
    {
      ans = mid;
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }

  return ans;
}

int main()
{
  int tc, n, m;
  cin >> tc;
  while (tc--)
  {
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    cout << search(a, n, m) << endl;
  }
  return 0;
}