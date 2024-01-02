// Hierarchical inheritance

# include<iostream.h>
# include<conio.h>

class Vehicle {
  public:
    Vehicle() {
      cout << "This is a vehicle\n";
    }
};

class Car: public Vehicle {
};

class Bus: public Vehicle {
};

int main() {
  clrscr();
  Car obj1;
  Bus obj2;
  getch();
  return 0;
}