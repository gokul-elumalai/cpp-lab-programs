// Program to implement stack
// ref: Programiz

# include<iostream.h>
# include<conio.h>

const int SIZE=5;

class Stack {
  private:
    int arr[SIZE];
    int top;

  public:
    Stack() {
      top = -1;
    }

    int isEmpty() {
      return (top == -1);
    }

    int isFull() {
      return (top == SIZE-1);
    }

    void push(int x) {
      if(isFull() == 1) {
	cout << "No space" << endl;
      }
      else {
	top++;
	arr[top] = x;
      }
    }

    void pop() {
      if(isEmpty() == 1) {
	cout << "Stack empty" << endl;
      }
      else {
	cout << arr[top] << endl;
	top--;
      }
    }
};

int main() {
  clrscr();
  Stack s;

  for(int i=0; i<5; i++) {
    s.push(i);
  }

  while(!s.isEmpty()) {
    s.pop();
  }

  getch();
  return 0;
}




