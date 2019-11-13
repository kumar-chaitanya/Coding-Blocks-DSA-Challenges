// Problem Statement
/* Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned. */

// Constraints
// Length of Array should be between 1 and 1000.

// Sample Input
// 4
// 1 0 2 9
// 5
// 3 4 5 6 7

// Sample Output
// 3, 5, 5, 9, 6, END

// Code
#include <iostream>
using namespace std;

int main() {
  int n,m,a[1002]={0},b[1002]={0};
  int carry = 0,s,aux;
  cin>>n;
  for(int i=n-1;i>=0;i--){
    cin>>a[i];
  }
  cin>>m;
  for(int i=m-1;i>=0;i--){
    cin>>b[i];
  }
  s = min(n,m);
  for(int i=0;i<s;i++){
    a[i] = a[i] + b[i] + carry;
    carry = a[i]/10;
    a[i] = a[i]%10;
  }
  if(carry || a[s] || b[s]) {
    a[s] = a[s]+b[s]+carry;
    carry = a[s]/10;
    a[s] = a[s]%10;
  } else{
    s--;
  }

  if(carry)
    a[++s] = carry;

  for(int i=s;i>=0;i--){
    cout<<a[i]<<", ";
  }
  cout<<"END";
  return 0;
}