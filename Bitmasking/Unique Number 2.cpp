// UNIQUE NUMBERS - II
// We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

// Input Format
// First line contains the number n. Second line contains n space separated number.

// Constraints
// n < 10^5

// Output Format
// Output a single line containing the unique numbers separated by space

// Sample Input
// 4
// 3 1 2 1

// Sample Output
// 2 3

// Code
#include <iostream>
using namespace std;

void findNums(int a[], int n)
{
  int ans = 0, aux = 0, count = 0;
  for (int i = 0; i < n; i++)
  {
    ans = ans ^ a[i];
  }
  aux = ans;
  while (aux)
  {
    if ((aux & 1) == 1)
    {
      count++;
      break;
    }
    aux = aux >> 1;
  }
  aux = 1 << (count - 1);
  count = 0;
  for (int i = 0; i < n; i++)
  {
    if ((aux & a[i]) == 1)
    {
      count = count ^ a[i];
    }
  }
  cout << (count ^ ans) << " ";
  cout << count;
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  findNums(a, n);
  return 0;
}