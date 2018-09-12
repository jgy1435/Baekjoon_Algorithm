//문제
//정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
//
//명령은 총 다섯 가지이다.
//
//push X: 정수 X를 스택에 넣는 연산이다.
//pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//size: 스택에 들어있는 정수의 개수를 출력한다.
//empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
//top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//입력
//첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.
//
//출력
//출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.

#include <iostream>

using namespace std;

typedef struct {
  int size;
  int top;
  int arr[10000];
}_stack;

_stack stack;

void push(int x) {
  stack.size += 1;
  stack.top += 1;
  stack.arr[stack.top] = x;
}

void pop() {
  if(stack.size != 0) {
    cout << stack.arr[stack.top--] << endl;
    stack.size -= 1;
  }
  else cout << "-1" << endl;
}

void size() {
  cout << stack.size << endl;
}

void empty() {
  if(stack.size == 0) cout << "1" << endl;
  else cout << "0" << endl;
}

void top(){
  if(stack.size == 0) cout << "-1" << endl;
  else cout << stack.arr[stack.top] << endl;
}

int main(int argc, const char * argv[]) {
  // insert code here...
  int N, element;
  string command;
  
  cin >> N;
  stack.size = 0;
  stack.top = -1;
  while(N--) {
    cin >> command;
    if(!command.compare("pop")) pop();
    else if(!command.compare("empty")) empty();
    else if(!command.compare("size")) size();
    else if(!command.compare("top")) top();
    else {
      cin >> element;
      push(element);
    }
  }
  return 0;
}
