//문제
//지민이는 길이가 64cm인 막대를 가지고 있다. 어느날, 그는 길이가 Xcm인 막대가 가지고 싶어졌다. 지민이는 원래 가지고 있던 막대를 더 작은 막대로 자른다음에, 풀로 붙여서 길이가 Xcm인 막대를 만드려고 한다.
//
//막대를 자르는 가장 쉬운 방법은 절반으로 자르는 것이다. 지민이는 아래와 같은 과정을 거쳐서 막대를 자르려고 한다.
//
//지민이가 가지고 있는 막대의 길이를 모두 더한다. 처음에는 64cm 막대 하나만 가지고 있다. 이때, 합이 X보다 크다면, 아래와 같은 과정을 반복한다.
//가지고 있는 막대 중 길이가 가장 짧은 것을 절반으로 자른다.
//만약, 위에서 자른 막대의 절반 중 하나를 버리고 남아있는 막대의 길이의 합이 X보다 크거나 같다면, 위에서 자른 막대의 절반 중 하나를 버린다.
//이제, 남아있는 모든 막대를 풀로 붙여서 Xcm를 만든다.
//X가 주어졌을 때, 위의 과정을 거친다면, 몇 개의 막대를 풀로 붙여서 Xcm를 만들 수 있는지 구하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 X가 주어진다. X는 64보다 작거나 같은 자연수이다.
//
//출력
//문제의 과정을 거친다면, 몇 개의 막대를 풀로 붙여서 Xcm를 만들 수 있는지 출력한다.

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
  int X;
  int sum = 64;
  int num = 1;
  vector<int> sticks;
  sticks.push_back(64);
  cin >> X;
  while(X < sum) {
    sticks[num - 1] = sticks[num - 1] / 2;
    sticks.push_back(sticks[num - 1]);
    num ++;
    int restSum = 0;
    for(vector<int>::iterator it = sticks.begin(); it != sticks.end() - 1; it++) restSum += *it;
    if(restSum >= X) {
      sticks.pop_back();
      num --;
      sum = restSum;
    }
  }
  cout << num;
  return 0;
}