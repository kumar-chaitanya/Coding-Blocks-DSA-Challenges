// KTH ROOT
// You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.

// Input Format
// First line contains number of test cases, T. Next T lines contains integers, n and k.

// Constraints
// 1<=T<=10 1<=N<=10^15 1<=K<=10^4

// Output Format
// Output the integer x

// Sample Input
// 2
// 10000 1
// 1000000000000000 10

// Sample Output
// 10000
// 31

// Code
#include <iostream>
#include <cmath>
using namespace std;

long kthroot(long n, long k)
{
  long s, e, m;
  s = 1;
  e = (n / k) + 1;
  while (s <= e)
  {
    m = (s + e) / 2;
    // cout<<s<<" "<<m<<" "<<e<<endl;
    if (pow(m, k) > n)
      e = m - 1;
    else if (pow(m, k) < n)
      s = m + 1;
    else
      return m;
  }
  return (pow(m, k) > n) ? m - 1 : m;
}

int main()
{
  long tc, n, k;
  cin >> tc;
  while (tc--)
  {
    cin >> n >> k;
    cout << kthroot(n, k) << endl;
  }
  return 0;
}