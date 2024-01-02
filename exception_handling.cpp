// Program for exception handling

# include<iostream.h>
# include<conio.h>

int main() {

  int a, b;
  cout << "Enter two nums: \n";
  cin >> a >> b;

  try {
    if(b == 0) {
      throw 0;
    }

    cout << "Resut: " << a/b;
  }
  catch(0) {
    cout << "Division error";
    return;
  }
  return 0;
}