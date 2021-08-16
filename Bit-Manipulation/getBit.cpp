#include <iostream>
using namespace std;


short int getBit(int number , int position)
{
	if(position<0)
		return -1;
	//otherwise
	int mask = 1<<position;
	//1 followed by position number of zeroes

	int bitFinal =  (mask & number);
	if(bitFinal) return 1;
	else return 0;
}
int main()
{
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	cout<<endl;

	int position;
	cout<<"Enter the position to find Bit at : ";
	cin>>position;

	int ans = getBit(number,position);
	cout<<"Bit present is : "<<ans<<endl;
	cout<<"-1 in case represents an invalid position"<<endl;
	return 0;
}