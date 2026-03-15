#include <iostream>
using namespace std;
int main() {
  int units;
  float bill = 0;
  char c = 'y';
  do {
    cout << "Enter units consumed: ";
    cin >> units;
    if (units <= 100)
      bill = 1.5 * units;
    else if (units <= 300)
      bill = (1.5 * 100) + (2 * (units - 100));
    else
      bill = (1.5 * 100) + (2 * 200) + (3 * (units - 300));
    cout << "Bills due: Rs." << bill << endl;
    cout << "Continue?(y/n): ";
    cin >> c;
  } while (c == 'y');
  return 0;
}
