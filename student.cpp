#include <iostream>
using namespace std;
class Student {
public:
  int roll;
  float marks[5];
  float total = 0;
  void accept() {
    cout << "Enter Roll no: ";
    cin >> roll;
    for (int i = 0; i < 5; i++) {
      cout << "Enter subject " << i + 1 << " marks";
      cin >> marks[i];
      total += marks[i];
    }
  }
  void grading() {
    cout << "Total Marks: " << total << endl;
    if (total >= 90)
      cout << "O Grade";
    else if (total >= 75)
      cout << "A Grade";
    else if (total >= 60)
      cout << "B Grade";
    else
      cout << "C Grade";
  }
};
int main() {
  Student ob;
  ob.accept();
  ob.grading();
  return 0;
}
