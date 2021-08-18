#include <iostream>
#include <climits>
using namespace std;


//for prime numbers less than or equal to n
void printPrimes(long long int n)
{
	//declare an array to store numbers
	//0 means not marked , 1 means marked
	long long int *arr=new long long int[n+1];

	for(int i=2;i<=n;i++) //for every element to check
	{
		//first check whether it is marked or not 
		//if not marked , then only proceed
		if(arr[i]==0)
		{
			//now check here
			for(int j = i*i ; j<=n; j = j+i) //multiples of i
			{
				if(arr[j]==0)
					arr[j]=1;
			}
		}
	}
	 //marking done
	cout<<"The prime numbers are : "<<endl;
	for(int j=2;j<=n;j++)
	{
		if(arr[j]==0) //not marked by anyone
			cout<<j<<" ";

	}
	cout<<endl;
}

int main()
{
	cout<<"Enter the number : ";
	long long int n;
	cin>>n;

	printPrimes(n);
	return 0;
}

/*OUTPUT

manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main$ g++ sieveEratosthenes.cpp
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main$ ./a.out
Enter the number : 5
The prime numbers are : 
2 3 5 
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main$ ./a.out
Enter the number : 6
The prime numbers are : 
2 3 5 
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main$ ./a.out
Enter the number : 20
The prime numbers are : 
2 3 5 7 11 13 17 19

*/