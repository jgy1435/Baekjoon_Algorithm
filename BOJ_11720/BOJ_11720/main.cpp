//문제
//N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.
//
//출력
//입력으로 주어진 숫자 N개의 합을 출력한다

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
  
  int N, sum = 0;
  string num;
  cin >> N;
  cin >> num;
  for(int i = 0; i < N; i++)
    sum += (num[i] - '0');
  cout << sum << endl;
  return 0;
}
