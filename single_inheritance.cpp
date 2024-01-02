// Single level inheritance

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

int main() {
  Car obj;
  getch();
  return 0;
}

