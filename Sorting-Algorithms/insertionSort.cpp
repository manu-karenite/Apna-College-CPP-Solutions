#include <bits/stdc++.h>
#define gap cout << endl << endl
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loopReverse(i,a,b) for (int i=a;i>b;i--)
using namespace std;



void swap (int *x , int * y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
void insertionSortIncreasing(int* arr, int size)
{
  //leave the first element as it is 
  //check from 2nd to last element

  for(int i=1;i<size;i++)
  {
    for(int j=i;j>0;j--)
    {
      if(arr[j]<arr[j-1])
        swap(&arr[j],&arr[j-1]);
      else
        break;
    }
  }
}

void insertionSortDecreasing(int* arr, int size)
{
  //leave the first element as it is 
  //check from 2nd to last element

  for(int i=1;i<size;i++)
  {
    for(int j=i;j>0;j--)
    {
      if(arr[j]>arr[j-1])
        swap(&arr[j],&arr[j-1]);
      else
        break;
    }
  }
}
int main() {
  cout << "**************Insertion Sort ********************";
  gap;

  cout << "Enter the size of the array : ";
  int size;
  cin >> size;
  //taking size as the inout

  //declaring array
  int * arr = new int[size];

  loop(i, 0, size) {
    cout << "Enter the element : ";
    cin >> arr[i];
  }
  gap;

  int choice;
  cout<<"Want in Ascending Order(1) or Descending Order ? ";
  cin>>choice;

  if(choice==1)
  { 
  insertionSortIncreasing(arr, size);
  gap;

  cout << "Elements in sorted order (increasing) are : ";
  loop(i, 0, size) {

    cout << arr[i] << " ";
  }
  gap;
}
else
{
  insertionSortDecreasing(arr, size);
  gap;

  cout << "Elements in sorted order (decreasing) are : ";
  loop(i, 0, size) {

    cout << arr[i] << " ";
  }
}
  delete[] arr;
  cout<<endl;
  return 0;

}

/*OUTPUT

**************Insertion Sort ********************

Enter the size of the array : 5
Enter the element : -4
Enter the element : -99
Enter the element : 66
Enter the element : 58
Enter the element : 778


Want in Ascending Order(1) or Descending Order ? 1


Elements in sorted order (increasing) are : -99 -4 58 66 778 


manavesh@manavesh-Aspire-A715-75G:~/Desktop/Apna-College-CPP-Solutions-main/Sorting-Algorithms$ ./a.out
**************Insertion Sort ********************

Enter the size of the array : 6
Enter the element :  9
Enter the element : 4
Enter the element : 7
Enter the element : 888
Enter the element : -7
Enter the element : 55


Want in Ascending Order(1) or Descending Order ? 2


Elements in sorted order (decreasing) are : 888 55 9 7 4 -7 

*/