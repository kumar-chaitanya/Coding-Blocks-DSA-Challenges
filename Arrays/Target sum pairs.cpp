// Problem Statement
/* Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target. */

// Input Format
/* The first line contains input N. Next N lines contains the elements of array and
(N+1)th line contains target number. */

// Constraints
/* Length of the arrays should be between 1 and 1000. */

// Output Format
/* Print all the pairs of numbers which sum to target. Print each pair in increasing order. */

// Sample Input
/*
   5
   1
   3
   4
	 2
	 5
	 5
*/

// Sample Output
/* 
	 1 and 4
	 2 and 3
*/

// Code
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,target;
	cin>>n;
	int arr[n], aux[n] = {0};
	for(int i=0;i<n;i++){
    cin>>arr[i];
	}
	cin>>target;
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(!aux[i] && !aux[j]){
        if((arr[i]+arr[j]) == target){
          cout<<arr[i]<<" "<<"and "<<arr[j]<<endl;
          arr[i] = arr[j] = 1;
        } else{
          continue;
        }
      }
    }
	}

	return 0;
}