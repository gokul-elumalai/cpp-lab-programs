/*
    Calculator program to do arithmetic operations
*/
#include<iostream.h>
#include<conio.h>

class Calculator {
  private:
    int a, b;

  public:
    Calculator(int x, int y) {
      a = x;
      b = y;
    }

    int add() {
      return a + b;
    }

    int sub() {
      return a - b;
    }

    int mul() {
      return a * b;
    }

    int div() {

      if(b == 0) {
        cout << "Zero div error\n";
        return -1;
      }

      return a / b;
    }


  }; // class ends

  int main() {
    clrscr();
    char choice;

    do {
      int a, b, option;
      cout << "Enter two numbers\n";
      cin >> a >> b;

      Calculator c = Calculator(a, b);

      cout << "Select operation\n\n \
      1 Add\n \
      2 Sub\n \
      3 Multiply\n \
      4 Divide\n";

      cin >> option;

      switch(option) {
        case 1: cout << c.add() << '\n';
            break;
        case 2: cout << c.sub() << '\n';
            break;
        case 3: cout << c.mul() << '\n';
            break;
        case 4: cout << c.div() << '\n';
            break;
        default: cout << "Invalid option\n";
		 break;
      } // switch end

      cout << "Do you want to continue? (y\\n)\n";
      cin >> choice;

    } while(choice == 'y'); // do while end


    getch();

    return 0;
  }
