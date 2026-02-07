#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  std::cout << "Payroll for Kathryn Janeway"<<endl;
  const double BaseSalary = 1525.00;
  const double TotalSales = 12253.78;
  const double TotalExpenses = 195.75;
  double TotalCommision, TotalPay;
  TotalCommision = TotalSales*.032;
  TotalPay = BaseSalary + TotalCommision + TotalExpenses;
  cout << "Base Salary:" << setw(5) << BaseSalary << endl;
  cout << "Commision:" << setw(10) << TotalCommision << endl;
  cout << "Expenses:" << setw(10) << TotalExpenses << endl;
  cout << setw(20) << "---------" << endl;
  cout << "Total:" << setw(14) << TotalPay << endl;
}