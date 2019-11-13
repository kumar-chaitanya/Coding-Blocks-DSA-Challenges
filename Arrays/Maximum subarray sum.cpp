// Problem Statement
/* You are given a one dimensional array that may contain both positive and negative
integers, find the sum of contiguous subarray of numbers which has the largest sum. For
example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum
is 7. */

// Input Format
/* The first line consists of number of test cases T. Each test case consists of N followed by N integers. */

// Constraints
// 1 <= N <= 100000
// 1 <= t <= 20
//  -100000000 <= A[i] <= 100000000

// Output Format
// The maximum subarray sum

// Sample Input
// 2
// 4
// 1 2 3 4
// 3
// -10 5 10

// Sample Output
// 10
// 15

// Code
#include <iostream>
using namespace std;

long kadaneSum(long arr[],int n){
  long max_so_far, max_here;
  max_so_far = max_here = 0;

  for(int i=0;i<n;i++){
    max_here = max(max_here+arr[i],arr[i]);
    max_so_far = max(max_so_far,max_here);
  }

  return max_so_far;
}

int main() {
  int tc,n;
  long arr[100005];

  cin>>tc;
  while(tc--){
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<kadaneSum(arr,n)<<endl;
  }

  return 0;
}
