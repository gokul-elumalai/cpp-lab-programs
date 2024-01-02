// Program to demonstrate Operator Overloading

# include<iostream.h>
# include<conio.h>

class Complex {
  public:
    int real;
    int img;

    Complex(int r, int i) {
      real = r;
      img = i;
    }

    Complex operator+(Complex c) {
      Complex res = Complex(0, 0);
      res.real = real + c.real;
      res.img = img + c.img;
      return res;
    }

}; // end class


int main() {
  clrscr();
  Complex c1 = Complex(3, 5);
  Complex c2 = Complex(5, 9);

  Complex c3 = c1 + c2;

  cout << c3.real << " " << c3.img;
  getch();

  return 0;
}