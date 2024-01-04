# include<iostream.h>
# include<conio.h>
# include<string.h>
# include<stdio.h>

class Prof{
  public:
    char *name;
    int id;

    void print() {
      cout << "Name is " << name << " and id is " << id << endl;
    }

    void operator++() {
      cout << "you yu" << endl;
    }
};

int main() {
  clrscr();
  char *s;
  Prof p;

  // cin >> s;
  gets(s);
  p.name = s;
  p.id = 1;
  p.print();

  p++;

  getch();
  return 0;
}