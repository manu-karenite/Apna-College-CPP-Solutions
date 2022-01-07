#include <bits/stdc++.h>
using namespace std;

int n;

int getDigits(int n){
	int p=0;
	while(n>0){
		p++;
		n=n/10;
	}
	return p;
}
int main(){
	cout<<"Enter the Number you want to enter  : ";
	cin>>n;
	int num=getDigits(n);
	cout<<"Number of digits in the number are : "<<num<<endl;
	return 0;
}