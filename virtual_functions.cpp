// Virtual functions

# include<iostream.h>
# include<conio.h>

class Base {
  public:
    virtual void print() {
      cout << "I'm base" << endl;
    }
};

class Derived: public Base {
  public:
    void print() {
      cout << "I'm derived" << endl;
    }
};


int main() {
  clrscr();

  Derived d;
  d.print();

  Base *p;
  p = &d;
  p->print();

  getch();
  return 0;
}