// Multilevel inheritance

# include<iostream.h>
# include<conio.h>

class Vehicle {
  public:
    Vehicle() {
      cout << "This is a vehicle\n";
    }
};

class FourWheeler: public Vehicle {
  public:
    FourWheeler() {
      cout << "Objects with 4 wheels are vehicle\n";
    }
};

class Car: public FourWheeler {
  public:
    Car() {
      cout << "Car has 4 wheels\n";
    }
};

int main() {
  clrscr();
  Car obj;
  getch();
  return 0;
}