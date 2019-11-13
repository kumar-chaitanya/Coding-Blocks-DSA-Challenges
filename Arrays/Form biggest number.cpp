// Problem Statement
/* You are provided an array of numbers. You need to arrange them in a way that yields the largest value. */

// Input Format
/* First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of array A[] and next line contains n space separated integers A[i]. */

// Constraints
// 1<=t<=100 
// 1<=m<=100 
// 1<=A[i]<=10^5

// Output Format
// Print the largest value.

// Sample Input
// 1
// 4
// 54 546 548 60

// Sample Output
// 6054854654

// Code
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int find_largest(string X,string Y){
  string XY = X.append(Y); 
  string YX = Y.append(X); 
  return XY.compare(YX) > 0 ? 1: 0;
}

int main() {
  int tc,n;
  string arr[101];
  cin>>tc;
  while(tc--){
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n,find_largest);
    for(int i=0;i<n;i++){
      cout<<arr[i];
    }
    cout<<endl;
  }
  return 0;
}