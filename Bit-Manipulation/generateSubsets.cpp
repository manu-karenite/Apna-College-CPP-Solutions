#include <iostream>
#include <string>
#define lb cout<<endl
using namespace std;


void generateSubsets(int* arr , int size)
{
	
	//total 0 to 2^size -1 subsets
	for(int i=0;i<(1<<size);i++)
	{
		for(int j=0;j<size;j++)
		{
			//this loop for getting the bit
			//take number as i and the position as j
			int mask = 1<<j;
			if(i & mask)
				cout<<arr[j]<<" ";
			
		}
		cout<<endl;
	}
}
int main()
{
	cout<<"Enter the number of elements in set : ";
	int size;
	cin>>size;
	lb;
	cout<<"Enter the elements  : ";
	int arr[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];

	generateSubsets(arr,size);
	lb;

}


/*
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number of elements in set : 3

Enter the elements  : 1 2 3

1 
2 
1 2 
3 
1 3 
2 3 
1 2 3 

*/