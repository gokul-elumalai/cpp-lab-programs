// Program to simulate banking operations

# include<iostream.h>
# include<conio.h>
typedef unsigned long ul;

class Account {
  private:
    ul balance;

  public:
    Account(ul amount) {
      balance = amount;
    }

    ul getBalance() {
      return balance;
    }

    ul deposit(ul amount) {
      balance += amount;
      return balance;
    }

    ul withdraw(ul amount) {
      if(balance >= amount) {
	balance -= amount;
      }
      else {
	cout << "Insufficient balance";
      }
      return balance;
    }

    ul addInterest(int rate) {
      return balance += balance * ((double) rate / 100);
    }
};

int main() {
  clrscr();
  ul balance;
  cout << "Enter initial balance: ";
  cin >> balance;

  Account acc = Account(balance);
  char choice = 'y';
  int option;

  do {
    ul amount;
    cout << "Enter choice:\n\n \
    1 Deposit\n \
    2 Withdraw\n \
    3 View Balance\n \
    4 Add interest\n";

    cin >> option;

    switch(option) {
      case 1: cout << "Enter amount to deposit: ";
		cin >> amount;
		acc.deposit(amount);
		cout << "\nAmount deposited\n";
		cout << "New balance: " << acc.getBalance() << "\n";
		break;

      case 2: cout << "Enter amount to withdraw: ";
		cin >> amount;
		acc.withdraw(amount);
		cout << "\nAmount debited\n";
		cout << "New balance: " << acc.getBalance() << "\n";
		break;
      case 3: cout << "Balance is: " << acc.getBalance() << "\n";
		break;
      case 4: cout << "Enter interest rate: ";
		int rate;
		cin >> rate;
		cout << "Rate: " <<(double) rate/100 <<"\n";
		acc.addInterest(rate);
		cout << "\nNew balance: " << acc.getBalance() << "\n";
		break;
    } // switch end

    cout << "\nDo you want to do another transaction? (y\\n)\n";
    cin >> choice;

  } while(choice == 'y');

  getch();

  return 0;
}



















