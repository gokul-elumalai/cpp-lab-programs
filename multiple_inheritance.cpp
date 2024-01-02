// Multiple inheritance

# include<iostream.h>
# include<conio.h>

class Vehicle {
  public:
    Vehicle() {
      cout << "This is a Vehicle\n";
    }
};

class FourWheeler {
  public:
    FourWheeler() {
      cout << "This is a 4 wheeler\n";
    }
};

class Car: public Vehicle, public FourWheeler {
  public:
    Car() {
      cout << "This is a car\n";
    }
};

int main() {
  clrscr();
  Car obj;
  getch();
  return 0;
}