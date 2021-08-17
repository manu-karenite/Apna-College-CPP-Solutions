#include <iostream>
using namespace std;


short int resetBit(int number , int position)
{
	if(position<0)
		return -1;
	//otherwise
	int mask = 1<<position;
	mask = ~mask;
	
	int finalAns = mask & number;
	return finalAns;
}
int main()
{
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	cout<<endl;

	int position;
	cout<<"Enter the position to reset Bit at : ";
	cin>>position;

	int ans = resetBit(number,position);
	cout<<"NUmbere generated is : "<<ans<<endl;
	cout<<"-1 in case represents an invalid position"<<endl;
	return 0;
}


/*
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ g++ resetBit.cpp
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number : 5

Enter the position to reset Bit at : 0
NUmbere generated is : 4
-1 in case represents an invalid position
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number : 8

Enter the position to reset Bit at : 3
NUmbere generated is : 0
-1 in case represents an invalid position

*/