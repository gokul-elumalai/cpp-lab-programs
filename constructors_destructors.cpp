// Program to implement Constructor and Destructor

# include<iostream.h>
# include<conio.h>

class House {
  int sqft;

  public:
    House() {
      sqft = 0;
      cout << "House created " << endl;
    }

    House(int n) {
      sqft = n;
      cout << "House created with value: " << sqft << endl;
    }

    ~House() {
      cout << "House obj is removed from memory" << endl;
      cout << "Now sqft is: " << sqft << endl;
    }
};

int main() {
  // clrscr();
  House h1;
  int i;
  cout << "Enter sqft for house: ";
  cin >> i;
  House h2(i);
  getch();
  return 0;
}