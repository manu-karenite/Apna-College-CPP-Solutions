//Space Complexity -> O(1)
//Time Complexity -> O(N)

#include <iostream>

#define gap cout << endl << endl#include <vector>

using namespace std;#include <time.h>


void linearSearch(vector < int > * v, int key) {
  int indexToPrint = -1;

  for (int p = 0; p < v -> size(); p++) {
    if (v -> at(p) == key) {

      indexToPrint = p;
      break;
    }
  }
  if (indexToPrint == -1) cout << "Element not found in the list!";
  else
    cout << key << " found in the list at index " << indexToPrint;
  cout << endl;

}

int main() {
  clock_t start, finish;
  start = clock();
  cout << "--------------LINEAR SEARCH--------------";
  gap;
  cout << "Enter the number of elements you want to enter  :";
  int size;
  cin >> size;
  vector < int > * v = new vector < int > ();

  cout << "Enter the elements one by one : ";
  int input;
  for (int i = 0; i < size; i++) {
    cin >> input;
    v -> push_back(input);
  }

  gap;
  cout << "Which element you want to search now ? ";
  cin >> input;
  linearSearch(v, input);
  gap;
  delete v;
  finish = clock();
  double time_used = (double(finish - start) / CLOCKS_PER_SEC);
  cout << "Time elapsed is : " << time_used << " seconds!";
  return 0;
}

/*OUTPUT
PS D:\AC\functions> .\a.exe
--------------LINEAR SEARCH--------------

Enter the number of elements you want to enter  :5
Enter the elements one by one : 1 2 3 4 5


Which element you want to search now ? 5
5 found in the list at index 4


Time elapsed is : 6.059 seconds!
PS D:\AC\functions> .\a.exe
--------------LINEAR SEARCH--------------

Enter the number of elements you want to enter  :4
Enter the elements one by one : 1 2 3
 4


Which element you want to search now ? 9
Element not found in the list!


Time elapsed is : 4.725 seconds!*/
