#include <iostream>
using namespace std;
int main() {
  float marks[50];
  float avg, sum = 0;
  int count = 0, max = 0;
  cout << "Enter marks of students: " << endl;
  for (int i = 0; i < 50; i++) {
    cout << "Student " << i + 1 << ": ";
    cin >> marks[i];
    sum += marks[i];
  }
  avg = sum / 50;
  for (int i = 0; i < 50; i++) {
    if (marks[i] > avg)
      count++;
    if (marks[i] > marks[max])
      max = i;
  }
  cout << "Highest marks: " << marks[max] << endl;
  cout << "Average marks: " << avg << endl;
  cout << "No. of students scoring above average: " << count << endl;
  return 0;
}
