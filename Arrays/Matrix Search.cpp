// Problem Statement
/* Given an n x m matrix, where every row and column is sorted in increasing order, and a number x. Find if element x is present in the matrix or not. */

// Input Format
/* First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched. */

// Constraints
// 1 <= N,M <= 30
// 0 <= A[i] <= 100

// Output Format
// Print 1 if the element is present in the matrix, else 0.

// Sample Input
// 3 3
// 3 30 38
// 44 52 54
// 57 60 69
// 62

// Sample Output
// 0

// Code
#include <iostream>
using namespace std;

int main() {
  int n,m,num,i,j,arr[30][30],flag=0;
  cin>>n>>m;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }

  cin>>num;
  i = 0;
  j = m-1;

  while(i<=n-1 && j>=0){
    if(arr[i][j] < num)
      i++;
    else if(arr[i][j] > num)
      j--;
    else if(arr[i][j] == num){
      flag = 1;
      break;
    }
  }
  cout<<flag;
  return 0;
}