// Program to overload function

# include<iostream.h>
# include<conio.h>

class Shape {

  public:
    int area(int side) {
      return side * side;
    }

    int area(int l, int b) {
      return l * b;
    }

};


int main() {
  clrscr();
  Shape s;

  cout << s.area(4) << "\n";
  cout << s.area(4, 8);

  getch();
  return 0;

}