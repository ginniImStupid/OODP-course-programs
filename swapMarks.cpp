#include <iostream>
using namespace std;
int main() {
  float marks1, marks2;
  cout << "Enter marks of student 1" << endl;
  cin >> marks1;
  cout << "Enter marks of student 2" << endl;
  cin >> marks2;

  marks1 += marks2;
  marks2 = marks1 - marks2;
  marks1 -= marks2;

  cout << "After swap: \nmarks1 = " << marks1 << "\nmarks2 = " << marks2;
  return 0;
}
