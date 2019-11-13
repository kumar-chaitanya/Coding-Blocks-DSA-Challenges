// Problem Statement
/* You are provided n numbers of array. You need to find the maximum length of bitonic subarray. A subarray A[i … j] is biotonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] … <= A[k] >= A[k + 1] >= .. A[j – 1] > = A[j] i.e subarray is first increasing and then decreasing or entirely increasing or decreasing. */

// Input Format
/* First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of array and next line contains n space separated integers. */

// Constraints
// 1<=t<=100 
// 1<=n<=1000000

// Output Format
// Print the maximum length.

// Sample Input
// 2
// 6
// 12 4 78 90 45 23
// 4
// 40 30 20 10

// Sample Output
// 5
// 4

// Code
#include <iostream>
using namespace std;

int biotonic_length(int arr[],int n){
  int aux,flag=1,currLength=1,maxLength=1;
  // flag = 1 means the subsequence is initially increasing, -1 means decreasing.
  aux = arr[0];
  for(int i=1;i<n;i++){
    if(flag==1 && arr[i]>=aux){
      aux = arr[i];
      currLength++;
      maxLength = max(maxLength,currLength);
    } else if(flag==1 && arr[i]<=aux) {
      aux = arr[i];
      currLength++;
      maxLength = max(maxLength,currLength);
      flag = -1;
    } else if(flag==-1 && arr[i]<=aux){
      aux = arr[i];
      currLength++;
      maxLength = max(maxLength,currLength);
    } else {
      currLength = 1;
      i--;
      flag = 1;
    }
  }
  return maxLength;
}

int main() {
  int tc,n,arr[1000005];
	cin>>tc;
	while(tc--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<biotonic_length(arr,n)<<endl;
	}
  return 0;
}