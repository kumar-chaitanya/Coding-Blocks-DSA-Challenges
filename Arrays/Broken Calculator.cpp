// Problem Statement
/* Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled 100! ,He wondered what would this number look like. He tried to calculate 100! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers? */

// Input Format
// a single lined integer N

// Constraints
// 1 <= N <= 500

// Output Format
// Print the factorial of N

// Sample Input
// 5

// Sample Output
// 120

// Code
#include <iostream>
using namespace std;

#define MAX 1000

// Algorithm Link - https://www.hackerearth.com/practice/notes/factorial-of-large-number/

int multiply(int res[],int res_size,int x){
  int carry = 0,prod;
  for(int i=0;i<res_size;i++){
    prod = (res[i]*x)+carry;
    res[i] = prod%10;
    carry = prod/10;
  }
  while(carry){
    res[res_size] = carry%10;
    carry = carry/10;
    res_size++;
  }
  return res_size;
}

void factorial(int n){
  int res[MAX],res_size;
  res[0] = 1;
  res_size = 1;
  
  for(int x=2;x<=n;x++){
    res_size = multiply(res,res_size,x);
  }
  for(int i=res_size-1;i>=0;i--){
    cout<<res[i];
  }
}

int main() {
  int n;
  cin>>n;
  factorial(n);
  return 0;
}