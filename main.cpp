/*
My first C++ spaghetti project. Simple console calculator that performs basic mathematical operations.
Created mostly for practice.
*/

#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

void  menu () {
        cout << "\n"
            "Pick your choice:\n"
            "1 - Sum\n"
            "2 - Substraction \n"
            "3 - Multiplication \n"
            "4 - Division \n"
            "5 - Factorial\n"
            "6 - Power of a number\n"
            "7 - Square root\n"
            "0 - End of work\n"
            "\n";
}

double readNumber(){
    double number;
    cout<<"Enter number"<<endl;
    cin>>number;
    return number;
}

double add() {
  return readNumber() + readNumber();
}

double substract() {
  return readNumber() - readNumber();
}

double multiply() {
  return readNumber() * readNumber();
}

double divide() {
  return readNumber() / readNumber();
}


long double factorial() {
  int n = readNumber();
  if (n <= 1) return 1;
  else {
    double res = 1;
    for (int i = n; i>1; --i) {
        res *= i;
    }
    return res;
  };
}

long double power() {
    double base = readNumber();
    double exp = readNumber();
  return pow(base, exp);
}

double sqroot(){
  return sqrt(readNumber());
}

int main()
{
  int position;
  do {
    menu();
    cin >> position;

    switch (position) {
      case 0: {
        cout << "Thanks for using my basic calc"<< endl;
        break;
      }
      case 1: {
        cout << "\nResult is " << add()<< endl;
        break;
      }
      case 2: {
        cout << "\nResult is  " << substract()<< endl;
        break;
      }
      case 3: {
        cout << "\nResult is  " << multiply()<< endl;
        break;
      }
      case 4: {

        cout << "\nResult is " << divide()<< endl;
        break;
      }
      case 5: {
        cout << fixed<<"\nFactorial of given number is  "<<setprecision(0)<<factorial()<< endl;
        break;
      }
      case 6: {
        cout << "\nResult is " << power() << endl;
        break;
      }
      case 7: {

        cout << "\nSqaure root of given number is " << sqroot() << endl;
        break;
      }
      default:
        cout << "\nWrong number, try again" << endl;
    }
  } while (position != 0);
  return 0;
}
