// Program to use Templates in C++

# include<iostream.h>
# include<conio.h>

template<class T>
T add(T a, T b) {
  return a + b;
}

template<class T, class V>
class Pair {
  private:
    T first;
    V second;

  public:
    Pair(T f, V s) {
      first = f;
      second = s;
    }

    T getFirst() {
      return first;
    }

    V getSecond() {
      return second;
    }
};

int main() {
  clrscr();

  int sum1 = add(5, 8);
  double sum2 = add(4.33, 6.345);

  cout << "Sum of ints: " << sum1 << endl;
  cout << "Sum of doubles: " << sum2 << endl;

  Pair<int, int> comp(5, 3);
  Pair<char, char> option('y', 'n');

  cout << "Complex no: " << comp.getFirst() << " " << comp.getSecond() << endl;
  cout << "Option : " << option.getFirst() << " " << option.getSecond() << endl;


  getch();
  return 0;
}

