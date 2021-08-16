#include <iostream>

#include <cmath>

#define gap cout << endl << endl
#define ll long long int
using namespace std;

ll solve(ll bin) {
  ll ans = 0;
  int power = 0;
  while (bin > 0) {
    int rem = bin % 10;

    if (rem != 1 && rem != 0) {
      cout << "Not a Binary Number!!" << endl;

      return -1;
    }
    ans += pow(2, power++) * rem;
    bin = bin / 10;
  }
  return ans;

}
int main() {
  cout << "Convert Binary to Decimal : ";
  gap;
  cout << "Enter the binary number : ";
  ll bin;
  cin >> bin;
  gap;

  ll ans = solve(bin);
  cout << bin << " in decimal equals : " << ans;
  return 0;
}
/*output
PS D:\AC\functions> g++ sum_n_numbers.cpp
PS D:\AC\functions> .\a.exe
Convert Binary to Decimal :

Enter the binary number : 101


101 in decimal equals : 5
PS D:\AC\functions> .\a.exe
Convert Binary to Decimal :

Enter the binary number : 1


1 in decimal equals : 1
PS D:\AC\functions> .\a.exe
Convert Binary to Decimal :

Enter the binary number : 0


0 in decimal equals : 0
PS D:\AC\functions> .\a.exe
Convert Binary to Decimal :

Enter the binary number : 121


Not a Binary Number!!
121 in decimal equals : -1
PS D:\AC\functions> .\a.exe
Convert Binary to Decimal :

Enter the binary number : 10000000000


10000000000 in decimal equals : 1024
*/
