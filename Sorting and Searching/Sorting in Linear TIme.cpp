// SORTING IN LINEAR TIME
// You will be given an array containing only 0s, 1s and 2s. you have sort the array in linear time that is O(N) where N is the size of the array.

// Input Format
// The first line contains N, which is the size of the array. The following N lines contain either 0, or 1, or 2.

// Constraints
// Each input element x, such that x ∈ { 0, 1, 2 }.

// Output Format
// Output the sorted array with each element separated by a newline.

// Sample Input
// 5
// 0
// 1
// 2
// 1
// 2

// Sample Output
// 0
// 1
// 1
// 2
// 2

// Code
#include<iostream>
using namespace std;

void dnfSort(int *a,int n){
  int s=0,m=0,e=n-1;
  while(m<e){
    if(a[m]<1){
      swap(a[s++],a[m++]);
    } else if(a[m]==1){
      m++;
    } else {
      swap(a[m],a[e--]);
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
  }
}

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  dnfSort(a,n);
	return 0;
}

