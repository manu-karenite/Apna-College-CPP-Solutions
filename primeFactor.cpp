#include <iostream>
using namespace std;


void getFactors(int n)
{
	//declare an array
	int arr[1000000];
	for(int i=0;i<=n;i++)
		arr[i]=i;
	//self numbers mean prime factor not marked yet

	for(int i=2;i<=n;i++)
	{
		//check if marked or not , same number means not marked
		if(arr[i]==i)
		{
			//we can do something here
			for(int j = i*i ; j<=n;j =j+i) //i intervals
			{
				if(arr[j]==j)
				{
					//mark the prime factor
					arr[j]= i;
				}
			}
		}
	}

	//prime factors marked

	while(n!=1)
	{
		cout<<arr[n]<<" ";
		n = n/arr[n]; //because arr[n]  contains the prime factor
	}
}

int main()
{
	cout<<"Enter the number to take out prime Factors : ";
	int n;
	cin>>n;

	getFactors(n);
	cout<<endl;
	return 0;
}

/*output
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main$ g++ primeFactor.cpp
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main$ ./a.out
Enter the number to take out prime Factors : 40
2 2 2 5 
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main$ ./a.out
Enter the number to take out prime Factors : 41
41 
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main$ ./a.out
Enter the number to take out prime Factors : 912
2 2 2 2 3 19 
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main$ ./a.out
Enter the number to take out prime Factors : 92
2 2 23 
*/