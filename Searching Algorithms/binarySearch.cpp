#include <iostream>

#define gap cout << endl << endl
using namespace std;
#include <vector>

#include <time.h>

int binarySearch(vector < int > v, int low, int high, int key) {
  if (low > high)
    return -1;
  int mid = (low + high) / 2;
  if (v[mid] == key)
    return mid;
  else if (key < v[mid])
    return (binarySearch(v, low, mid - 1, key));
  else
    return (binarySearch(v, mid + 1, high, key));
}
int main() {

  time_t start, finish;
  start = clock();
  cout << "-------------------------- BINARY SEARCH --------------------------";
  gap;
  cout << "Enter number of elements you want to enter : ";
  int size;
  cin >> size;
  cout << endl;
  cout << "Enter numbers one by one : ";
  vector < int > v;
  int element;
  for (int i = 0; i < size; i++) {
    cin >> element;
    v.push_back(element);
  }
  gap;

  int key;
  cout << "Enter key to search in the list : ";
  cin >> key;
  gap;
  int foundAtIndex = binarySearch(v, 0, v.size() - 1, key);
  if (foundAtIndex == -1)
    cout << "Element not found !";
  else
    cout << key << " found at the index -> " << foundAtIndex;
  gap;

  finish = clock();
  double time_elapsed = (double(finish - start) / CLOCKS_PER_SEC);
  cout << "Time taken for execution : " << time_elapsed << " seconds! ";

  return 0;

}

/*OUTPUT
PS D:\AC\functions> .\a.exe
-------------------------- BINARY SEARCH --------------------------

Enter number of elements you want to enter : 10

Enter numbers one by one : 1 2 3 4 5 6 7 8 9 10


Enter key to search in the list : 4


4 found at the index -> 3

Time taken for execution : 10.092 seconds!
*/
