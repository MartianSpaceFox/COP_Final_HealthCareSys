#include <iostream>
#include<iomanip>
using namespace std;

// Adding Header file - JN
#include "Surgery.h"

class Surgery {
  public:
  double surgeryCost(char);

  private:
  char answer;
  int choice;
  double amount = 0;
};

double Surgery::surgeryCost(char answer) {
  if (answer == 'y') {
    cout << "Please enter the surgery type" << endl;
    cout << "1 - Minor surgery $ 600" << endl;
    cout << "2 - Eye surgery $ 1,250" << endl;
    cout << "3 - Knee replacement  $ 6,000" << endl;
    cout << "4 - Heart surgery $12,000" << endl;
    cout << "5 - Brain surgery $28,000" << endl;

    cin >> choice;
    while (choice < 1 || choice > 5) {
      cout << "Invalid input." << endl;
      cout << "Please input 1 to 5" << endl;
      cin >> choice;
    }

    if (choice == 1) {
      amount = 600;
    }
    else if (choice == 2) {
      amount = 1250;
    }
    else if (choice == 3) {
      amount = 6000;
    }
    else if (choice == 4) {
      amount = 12000;
    }
    else if (choice == 5) {
      amount = 28000;
    }
  }
  return amount;
}

int main() {
  Surgery surgery;
  char answer;
  double total = 0;
  cout << "Did you get surgery (y/n)" << endl;
  cin >> answer;
  while (answer != 'y' && answer != 'n') {
    cout << "Invalid input." << endl;
    cout << "Please input y or n" << endl;
    cin >> answer;
  }
  total = total + surgery.surgeryCost(answer);
  cout << "Your total is : $" << total;
  return 0;

}
