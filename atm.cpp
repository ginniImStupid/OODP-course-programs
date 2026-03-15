#include <iostream>
using namespace std;
int main() {
  int cpin = 4534;
  int pin;
  cout << "Enter PIN:" << endl;
  for (int i = 1; i <= 3; i++) {
    cin >> pin;
    if (pin == cpin) {
      cout << "Access granted!";
      return 0;
    }
    cout << "Incorrect PIN. You have " << (3 - i) << " attempts remaining";
  }
  cout << "Access denied.";
  return 0;
}
