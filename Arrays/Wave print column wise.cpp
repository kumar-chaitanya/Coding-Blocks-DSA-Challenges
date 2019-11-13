// Problem Statement
/* Take as input a two-d array. Wave print it column-wise. */

// Input Format
/* Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers). */

// Constraints
/* Both M and N are between 1 to 10. */

// Output Format
/* All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example). */

// Sample Input
/* 
   4 4
   11 12 13 14
   21 22 23 24
   31 32 33 34
   41 42 43 44
*/

// Sample Output
/* 11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END */

// Code
#include<iostream>
using namespace std;

int main() {
	int n,m;
  cin>>n>>m;

  int arr[n][m];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }

  for(int j=0;j<m;j++){
    if(!(j&1)) {
      for(int i=0;i<n;i++){
        cout<<arr[i][j]<<", ";
      }
    } else {
      for(int i=n-1;i>=0;i--){
        cout<<arr[i][j]<<", ";
      }
    }
  }
  cout<<"END";

  return 0;
}