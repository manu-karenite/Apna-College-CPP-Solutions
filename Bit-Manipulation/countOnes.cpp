#include <iostream>
#include <string>
using namespace std;


short int countOnes(int n)
{
	if(n<=0)
		return 0;

	//what if not 0 ?
	int count = 0;
	while(n!=0)
	{
		count++;
		n = n & (n-1);
	}
	return count;
}
int main()
{
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	cout<<endl;

	short int ans = countOnes(number);
	
	cout<<"Number of ones in Binary Number of "<<number<<" is "<<ans<<endl;
	return 0;
}


/*
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number : 7

Number of ones in Binary Number of 7 is 3
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number : 31

Number of ones in Binary Number of 31 is 5
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number : 55

Number of ones in Binary Number of 55 is 5
*/