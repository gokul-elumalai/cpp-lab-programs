// Bit fields

# include<iostream.h>
# include<conio.h>

typedef struct Mony {
  int rup: 4;
  int dol: 8;
} mny;

int main() {
  clrscr();

  mny m;
  m.rup = 4;
  m.dol = 40;

  cout << m.rup << endl;
  cout << m.dol << endl;

  getch();
  return 0;
}