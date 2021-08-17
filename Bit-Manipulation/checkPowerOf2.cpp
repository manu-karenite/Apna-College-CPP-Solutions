#include <iostream>
#include <string>
using namespace std;


bool checkNotPowerof2(int n)
{
	

	if(n<=0)
		return true;
	else
		return (n&(n-1));
}
int main()
{
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	cout<<endl;

	bool ans = checkNotPowerof2(number);
	string answer = (ans == false) ? "a power of 2 !" : "not a power of 2!";
	cout<<number<<" is "<<answer;
	return 0;
}


/*
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ g++ checkPowerOf2.cpp
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number : 0

0 is not a power of 2!manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number : 8

8 is a power of 2 !manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number : 1

1 is a power of 2 !

*/