// PIVOT OF SORTED AND ROTATED ARRAY
// You are given a sorted but rotated array. You need to fine the index of the pivot element of the array where pivot is that element in the array which is greater than its next element and divides the array into two monotonically increasing halves.

// Input Format
// The first line denotes N - the size of the array. The following N lines each denote the numbers in the array.

// Output Format
// Output the index of the pivot of the array.

// Sample Input
// 5
// 4
// 5
// 1
// 2
// 3

// Sample Output
// 1

// Code
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int s, m, e;
  s = 0;
  e = n - 1;

  if (n == 1)
  {
    cout << 0;
  }

  while (s <= e)
  {
    m = (s + e) / 2;

    if (arr[m] > arr[s] and arr[m] > arr[e])
    {
      s = m;
    }
    else if (arr[m] < arr[s] and arr[m] < arr[e])
    {
      e = m;
    }
    else if (arr[m] > arr[m + 1])
    {
      break;
    }
  }

  cout << m;

  return 0;
}