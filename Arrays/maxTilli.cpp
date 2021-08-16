#include <iostream>

#include <algorithm>

#include <climits>

#define gap cout << endl << endl
using namespace std;

void maxTilli(int * arr, int size) {

  int minimum = INT_MIN;

  for (int i = 0; i < size; i++) {
    cout << "Largest element till " << i << " is : " << max(arr[i], minimum) << endl;
    minimum = max(arr[i], minimum);
  }
}
int main() {
  cout << "Maximum till i : " << endl;
  gap;
  cout << "Enter the number of elements : ";
  int size;
  cin >> size;

  int * arr = new int[size];
  for (int i = 0; i < size; i++) {
    cout << "Enter the elements : ";
    cin >> arr[i];
  }
  gap;
  maxTilli(arr, size);
  gap;
  return 0;
}

/*OUTPUT
PS D:\AC\functions> .\a.exe
Maximum till i :


Enter the number of elements : 5
Enter the elements : -9
Enter the elements : 5
Enter the elements : 7
Enter the elements : 101
Enter the elements : 58


Largest element till 0 is : -9
Largest element till 1 is : 5
Largest element till 2 is : 7
Largest element till 3 is : 101
Largest element till 4 is : 101


PS D:\AC\functions> .\a.exe
Maximum till i :


Enter the number of elements : 2
Enter the elements : 5
Enter the elements : 2


Largest element till 0 is : 5
Largest element till 1 is : 5

*/
