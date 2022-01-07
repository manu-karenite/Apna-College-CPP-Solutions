#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
	int input;
	int sum;

public:
	Solution(){
		sum=0;
	}
	void readInput(){
		cout<<"Enter the number : ";
		cin>>input;
	}
	bool checkPalindrome(){
		//convert opposite first
		int dupli=input;
		while(dupli>0){
			int last = dupli%10;
			sum=sum*10+last;
			dupli=dupli/10;
		}
		//sum contains reversed
		return sum==input;

	}
};

int main(){
	Solution *obj = new Solution();
	obj->readInput();
	bool ans = obj->checkPalindrome();
	string print = ans ? "The Number is palindrome!":"Number is not a palindrome!";
	cout<<print; 
	return 0;
}

