// STRING SORT
// Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

// Input Format
// N(integer) followed by N strings.

// Constraints
// N<=1000

// Output Format
// N lines each containing one string.

// Sample Input
// 3
// bat
// apple
// batman

// Sample Output
// apple
// batman
// bat

// Code
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool isprefix(string s1, string s2){
	int res = s1.compare(0,s2.size(),s2);
	return !res;
}

bool compare_strings(string s1,string s2){
	// cout << s1 << " " << s2 << endl;
	int len1,len2,res;
	bool flag;
	len1 = s1.size();
	len2 = s2.size();

	if(len1 == len2){
		res = s1.compare(s2);
		// cout<<res<<endl;
		return (res <= 0) ? true : false;
	} else if(len1 > len2){
		flag = isprefix(s1,s2);
		// cout<<flag<<endl;
		if(flag)
			return true;
		else{
			return (s1.compare(s2) < 0) ? true : false;
		}
	} else if(len2 > len1){
		flag = isprefix(s2,s1);
		// cout<<flag<<endl;
		if(res)
			return false;
		else{
			return (s2.compare(s1) < 0) ? false : true;
		}
	}
}

int main() {
	int n;
	cin>>n;
	string arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n,compare_strings);
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
