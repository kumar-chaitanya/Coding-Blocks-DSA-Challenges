// Problem Statement
/* Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all triplets of numbers which
sum to target. */

// Input Format
/* First line contains input N. Next N lines contains the elements of array and N+1 line contains target number. */

// Constraints
/* Length of Array should be between 1 and 1000. */

// Output Format
/* Print all the triplet present in the array. */

// Sample Input
/* 
	 9
	 5
	 7
	 9
	 1
	 2
	 4
	 6
	 8
	 3
	 10
*/

// Sample Output
/*
	 1, 2 and 7
	 1, 3 and 6
	 1, 4 and 5
	 2, 3 and 5
*/

// Code
#include <iostream>
#include <algorithm>
using namespace std;

void print(int a,int b,int c){
  cout<<a<<", "<<b<<" and "<<c<<endl;
  return;
}

int main() {
  int n,target,left,right;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cin>>target;
  sort(arr,arr+n);
  for(int i=0;i<n;i++){
    left = i+1; right = n-1;
    while(left<right){
      if((arr[i]+arr[left]+arr[right]) == target){
        print(arr[i],arr[left],arr[right]);
        left++;
        right--;
      } else if((arr[i]+arr[left]+arr[right])<target){
        left++;
      } else{
        right--;
      }
    }
  }
  return 0;    
}