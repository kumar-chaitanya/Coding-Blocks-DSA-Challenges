// PAINTER PROBLEM
// You have to paint N boards of length {A0, A1, A2, A3 … AN-1}. There are K painters available and you are also given how much time a painter takes to paint 1 unit of board. You have to get this job done as soon as possible under the constraints that any painter will only paint contiguous sections of board. Return the ans % 10000003

// Input Format
// 1<=N<=100000 1<=K<=100000 1<=T<=1000000 1<=Li<=100000

// Constraints
// 1<=N<=100000 1<=K<=100000 1<=T<=1000000 1<=Li<=100000

// Output Format
// Return minimum time required to paint all boards % 10000003.

// Sample Input
// 2
// 2          
// 5
// 1 10

// Sample Output
// 50

// Code
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool verify(long a[], long n, long k, long m, long sum)
{
  long ans = 0;
  for (long i = n - 1; i >= 0; i--)
  {
    if (ans + a[i] > m)
      continue;
    else
      ans += a[i];
  }
  long correct = ceil((sum - ans) / (k - 1));
  return (correct <= m) ? true : false;
}

long solution(long a[], long n, long k)
{
  long s, e, m, sum = 0;
  for (long i = 0; i < n; i++)
  {
    sum += a[i];
  }
  s = a[n - 1];
  e = sum;

  if (k == 1)
  {
    return sum;
  }

  if (n == k)
  {
    return a[n - 1];
  }

  while (s + 1 < e)
  {
    m = (s + e) / 2;
    if (verify(a, n, k, m, sum))
      e = m;
    else
      s = m;
  }

  return (verify(a, n, k, (s + e) / 2, sum)) ? s : e;
}

int main()
{
  long n, k, t;
  cin >> n >> k >> t;
  long a[n];
  for (long i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  long ans = (solution(a, n, k) * t);
  long div = 10000003;
  cout << (ans % div);
  return 0;
}