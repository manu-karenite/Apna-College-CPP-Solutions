#include <iostream>
using namespace std;


short int getBit(int number , int position)
{
	if(position<0)
		return -1;
	//otherwise
	int mask = 1<<position;
	int finalAns = mask | number;
	return finalAns;
}
int main()
{
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	cout<<endl;

	int position;
	cout<<"Enter the position to set Bit at : ";
	cin>>position;

	int ans = getBit(number,position);
	cout<<"NUmbere generated is : "<<ans<<endl;
	cout<<"-1 in case represents an invalid position"<<endl;
	return 0;
}


/*
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number : 0

Enter the position to set Bit at : 3
NUmbere generated is : 8
-1 in case represents an invalid position
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number : 7

Enter the position to set Bit at : 0
NUmbere generated is : 7
-1 in case represents an invalid position
manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Bit-Manipulation$ ./a.out
Enter the number : 6

Enter the position to set Bit at : 0
NUmbere generated is : 7
-1 in case represents an invalid position
*/