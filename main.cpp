/*
My first C++ spaghetti project. Simple console calculator that performs basic mathematical operations.
Created mostly for practice.
*/

#include <iostream>
#include <cmath>
#include<iomanip>



void  menu () {
         std::cout << "\n"
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
    std::cout<<"Enter number\n";
    std::cin>>number;
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
    std::cin >> position;

    switch (position) {
      case 0: {
        std::cout << "Thanks for using my basic calc\n";
        break;
      }
      case 1: {
        std::cout << add()<<"\n";
        break;
      }
      case 2: {
        std::cout << substract()<< "\n";
        break;
      }
      case 3: {
        std::cout << multiply()<< "\n";
        break;
      }
      case 4: {

        std::cout << divide()<< "\n";
        break;
      }
      case 5: {
       std::cout << std::fixed<<std::setprecision(0)<<factorial()<< "\n";
        break;
      }
      case 6: {
        std::cout << power() << "\n";
        break;
      }
      case 7: {

        std::cout << sqroot() << "\n";
        break;
      }
      default:
        std::cout << "\nWrong number, try again\n";
    }
  } while (position != 0);
  return 0;
}
