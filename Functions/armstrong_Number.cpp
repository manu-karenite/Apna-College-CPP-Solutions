#include <iostream>
#include <cmath>
using namespace std;


bool solve(int n)
{
	int sum =0;
	int orig = n;  //to check later
	while(n>0)
	{
		sum =sum+pow(n%10,3);
		n=n/10;
	}
	
	if(sum==orig) return true;
	return false;
}
int main()
{
	cout<<"Enter a number to check  : ";
	int n;
	cin>>n;

	if(solve(n)==true)
		cout<<"An Armstrong Number!";
	else
		cout<<"Not an Armstrong Number";
	return 0;

}

/*OUTPUT
PS D:\AC> g++ 3_armstrongCheck.cpp
PS D:\AC> .\a.exe
Enter a number to check  : 153
An Armstrong Number!
PS D:\AC> .\a.exe
Enter a number to check  : 407
An Armstrong Number!
PS D:\AC> .\a.exe
Enter a number to check  : 54
Not an Armstrong Number
*/
