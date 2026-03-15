#include <iostream>
using namespace std;
class BankAccount {
public:
  float balance;
  BankAccount() { balance = 500; }
  BankAccount(float balance) { this->balance = balance; }
};
int main() {
  float bal;
  char chk;
  cout << "Set custom balance to account?(default=Rs.500.00)(y/n): ";
  cin >> chk;
  switch (chk) {
  case 'y': {
    cout << "Enter custom balance: ";
    cin >> bal;
    if (bal > 0) {
      BankAccount ob(bal);
      cout << "Current Balance: Rs." << ob.balance;
    } else {
      cout << "Invalid Input";
    }
    break;
  }
  case 'n': {
    BankAccount ob;
    cout << "Current Balance: Rs." << ob.balance;
    break;
  }
  default:
    cout << "Invalid Input";
  }
  return 0;
}
