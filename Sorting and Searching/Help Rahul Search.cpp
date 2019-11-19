// HELP RAHUL TO SEARCH
// Rahul had a sorted array of numbers from which he had to find a given number quickly. His friend by mistake rotated the array. Now Rahul doesn't have time to sort the elements again. Help him to quickly find the given number from the rotated array.

// Input Format
// The first line contains N - the size of the array. the next N lines contain the numbers of the array.The next line contains the item to be searched.

// Output Format
// Output the index of number in the array to be searched. Output -1 if the number is not found.

// Sample Input
// 5
// 4
// 5
// 1
// 2
// 3
// 2

// Sample Output
// 3

// Code
#include <iostream>
using namespace std;

int search(int arr[], int l, int h, int key)
{
  if (l > h)
    return -1;

  int mid = (l + h) / 2;
  if (arr[mid] == key)
    return mid;

  // If arr[l...mid] is sorted
  if (arr[l] <= arr[mid])
  {

    if (key >= arr[l] && key <= arr[mid])
      return search(arr, l, mid - 1, key);

    return search(arr, mid + 1, h, key);
  }

  if (key >= arr[mid] && key <= arr[h])
    return search(arr, mid + 1, h, key);

  return search(arr, l, mid - 1, key);
}

int main()
{
  int n, x;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cin >> x;
  cout << search(arr, 0, n - 1, x);
  return 0;
}
