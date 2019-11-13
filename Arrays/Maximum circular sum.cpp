// Problem Statement
/* You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive number. */

// Input Format
/* First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of numbers and next line contains n space separated integers. */

// Constraints
// 1<=t<=100 
// 1<=n<=1000

// Output Format
// Print the maximum sum.

// Sample Input
// 1
// 7
// 8 -8 9 -9 10 -11 12

// Sample Output
// 22

// Code
#include <iostream>
using namespace std;

int kadaneSum(int arr[],int n){
  int max_so_far, max_here;
  max_so_far = max_here = 0;

  for(int i=0;i<n;i++){
    max_here = max(max_here+arr[i],arr[i]);
    max_so_far = max(max_so_far,max_here);
  }

  return max_so_far;
}

int main() {
  int tc,n,sum=0,kadane;
  int arr[1005];

  cin>>tc;
  while(tc--){
    sum = 0;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      sum += arr[i];
    }
    kadane = kadaneSum(arr,n);
    for(int i=0;i<n;i++){
      arr[i] = -arr[i];
    }
    sum = sum + kadaneSum(arr,n);
    cout<<max(sum,kadane)<<endl;
  }

  return 0;
}
