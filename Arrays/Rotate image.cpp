// Problem Statement
// Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

// Input Format
// First line contains a single integer N. Next N lines contain N space separated integers.

// Constraints
// N < 1000

// Output Format
// Print N lines with N space separated integers of the rotated array.

// Sample Input
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// Sample Output
// 4 8 12 16 
// 3 7 11 15 
// 2 6 10 14 
// 1 5 9 13 

// Code
#include<iostream>
using namespace std;

int main(){
  int n,temp;
  cin>>n;
  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  for(int i=0;i<n/2;i++){
    for(int j=0;j<n;j++){
      temp = arr[i][j];
      arr[i][j] = arr[n-i-1][j];
      arr[n-i-1][j] = temp;  
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}