#include <iostream>

using namespace std;
#define gap cout << endl << endl

void upleft(int row) {
  for (int i = 1; i <= row; i++) {
    cout << "*";
    if (i != 1) {
      for (int p = 1; p <= i - 2; p++) cout << " ";
      cout << "*";
    }

    for (int j = 1; j <= row - i; j++) cout << " ";
    for (int j = 1; j <= row - i; j++) cout << " ";
    if (i != 1) {
      cout << "*";
    }
    for (int p = 1; p <= i - 2; p++) cout << " ";
    cout << "*";

    cout << endl;
  }

}

void downleft(int row) {
  int space = row - 2;
  int midspace = 0;

  for (int i = 1; i <= row; i++) {
    cout << "*";

    if (i != row) {
      for (int a = 1; a <= space; a++)
        cout << " ";
      cout << "*";
    }

    for (int b = 1; b <= midspace; b++) cout << " ";

    for (int b = 1; b <= midspace; b++) cout << " ";

    cout << "*";
    if (i != row) {
      for (int a = 1; a <= space; a++)
        cout << " ";
      cout << "*";
    }
    space--;
    midspace++;

    cout << endl;
  }

}
int main() {
  cout << "Solid Butterfly : ";
  gap;
  cout << "Enter the size of Butterfly : ";
  int row;
  cin >> row;
  gap;
  upleft(row);
  downleft(row);
  gap;
  return 0;

}
/*OUTPUT
PS D:\AC> g++ pattern21.cpp
PS D:\AC> .\a.exe
Solid Butterfly :

Enter the size of Butterfly : 5


*        *
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
*        *

*/
