// Problem Statement
/* Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain. Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save. */

// Input Format
/* First line contains an integer n. Second line contains n space separated integers representing the elevation map. */

// Output Format
/* Print a single integer containing the maximum unit of waters she can save. */

// Sample Input
// 10
// 0 2 1 3 0 1 2 1 2 1

// Sample Output
// 5

// Code
#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;
	cin>>n;
	int arr[n],left[n] = {0},right[n] = {0};

	for(int i=0;i<n;i++){
    cin>>arr[i];
	}

	left[0] = arr[0];
	right[n-1] = arr[n-1];

	for(int i=1;i<n;i++){
    left[i] = max(left[i-1],arr[i]);
	}

	for(int i=n-2;i>=0;i--){
    right[i] = max(right[i+1],arr[i]);
	}

	for(int i=0;i<n;i++){
    sum += min(left[i],right[i]) - arr[i];
	}

	cout<<sum;
	return 0;
}
