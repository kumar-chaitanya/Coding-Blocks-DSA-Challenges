// Problem Statement
/* Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t. Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero. */

// Input Format
// The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.

// Constraints
// x <= 100000000000000000

// Output Format
/* Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes. */

// Sample Input
// 4545

// Sample Output
// 4444

//Code
#include <iostream>
#include<string>
using namespace std;

int main() {
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++){
    if(i==0 && s[i]=='9')
      continue;
    if(s[i]>='5'&&s[i]<='9'){
      s[i] = ('9' - s[i]) + '0';
    }
  }

  for(int i=0;i<s.length();i++){
    cout<<s[i];
  }
  return 0;
}
