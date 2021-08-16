#include <iostream>
#include <cmath>
using namespace std;


int solve(int &n)
{
	int sum =0;
	int i=0;
	while(n>0)
	{
		sum = sum*10 + n%10; 
		n =n/10;
	}
	return sum;

}
int main()
{
	cout<<"Enter a Number to reverse : ";
	int n;
	cin>>n;

	int rev = solve(n);
	cout<<"Reversed Number is : "<<rev<<endl;
	return 0;

}

/*OUTPUT
PS D:\AC> g++ 2_reverseNumber.cpp
PS D:\AC> .\a.exe
Enter a Number to reverse : 1000
Reversed Number is : 1
PS D:\AC> .\a.exe
Enter a Number to reverse : 453
Reversed Number is : 354
PS D:\AC>
*/
