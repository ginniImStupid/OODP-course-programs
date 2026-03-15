#include <iostream>
using namespace std;
class Employee {
private:
  float hra, da, basicSalary;

public:
  Employee(float basicSalary, float da, float hra) {
    this->basicSalary = basicSalary;
    this->da = da;
    this->hra = hra;
  }
  void calculateSalary() { basicSalary += hra + da; }
  void displaySalary() {
    cout << "Calculated take home salary is: " << basicSalary;
  }
};
int main() {
  float hra, da, basicSalary;
  cout << "Enter salary information: (Basic Salary/DA/HRA)" << endl;
  cin >> basicSalary >> da >> hra;
  Employee ob(basicSalary, da, hra);
  ob.calculateSalary();
  ob.displaySalary();
  return 0;
}
