#include <iostream>

#include <cmath>

#define gap cout << endl << endl
#define ll long long int
using namespace std;

inline bool getAns(ll a, ll b, ll c) {
  if (a == 0 || b == 0 || c == 0) return false;
  ll big = max(a, max(b, c));

  ll big1, small1, small2;
  if (big == a) {
    big1 = a, small1 = b, small2 = c;
  } else if (big == b) {
    big1 = b;
    small1 = a;
    small2 = c;
  } else {
    big1 = c;
    small1 = a;
    small2 = b;
  }

  ll left = pow(big1, 2);
  ll right = pow(small1, 2) + pow(small2, 2);
  if (left == right) return true;
  else return false;

}
int main() {
  cout << "Check Pyhtogarean Triplet : ";
  gap;
  ll a, b, c;
  cout << "Enter number1 : ";
  cin >> a;
  cout << "Enter number2 : ";
  cin >> b;
  cout << "Enter number3 : ";
  cin >> c;

  bool ans = getAns(a, b, c);
  if (ans) cout << "Yes! ";
  else cout << "No! ";
  return 0;

}
/*output
Check Pyhtogarean Triplet :

Enter number1 : 0
Enter number2 : 0
Enter number3 : 0
No!
PS D:\AC\functions> .\a.exe
Check Pyhtogarean Triplet :

Enter number1 : 3
Enter number2 : 4
Enter number3 : 5
Yes!
PS D:\AC\functions> .\a.exe
Check Pyhtogarean Triplet :

Enter number1 : 12
Enter number2 : 5
Enter number3 : 13
Yes!
*/
