// COUNTING SORT
// You are given an array, Sort this array using counting sort algorithm.

// Input Format
// First line contains a single integer,
// n, denoting the size of the array.Next line contains n integers, denoting the elements of the array.

// Constraints
// 1 <= N <= 10^6 0 <= Ai <= 10 ^ 6

// Output Format 
// Print the array in sorted order.

// Sample Input 
// 5 1 3 2 6 5 

// Sample Output 
// 1 2 3 5 6

// Code
#include <iostream>
using namespace std;

int main()
{
  int n, maxnum = -1;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    maxnum = (arr[i] > maxnum) ? arr[i] : maxnum;
  }
  int aux[maxnum + 1] = {0};

  for (int i = 0; i < n; i++)
  {
    aux[arr[i]]++;
  }
  int x = 0;
  for (int i = 0; i <= maxnum; i++)
  {
    for (int j = 0; j < aux[i]; j++)
    {
      arr[x++] = i;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
