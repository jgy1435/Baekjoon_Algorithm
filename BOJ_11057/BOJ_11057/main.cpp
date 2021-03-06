//
//  main.cpp
//  BOJ_11057
//
//  Created by 정구열 on 2018. 5. 31..
//  Copyright © 2018년 guyeol_jeong. All rights reserved.
//

/*
 * 문제 *
 * 오르막 수는 수의 자리가 오름차순을 이루는 수를 말한다. 이 때, 인접한 수가 같아도 오름차순으로 친다.
 * 예를 들어, 2234와 3678, 11119는 오르막 수이지만, 2232, 3676, 91111은 오르막 수가 아니다.
 * 수의 길이 N이 주어졌을 때, 오르막 수의 개수를 구하는 프로그램을 작성하시오. 수는 0으로 시작할 수 있다.
 */

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
  int N;  // 1 <= N <= 1,000
  int dp[10];
  int sum = 0;
  
  cin >> N;
  for(int i = 0; i < 10; i++) dp[i] = 1;
  for(int i = 2; i <= N; i++) {
    for(int j = 1; j < 10; j++) {
      dp[j]=(dp[j]+dp[j-1]) % 10007;
    }
  }
  for(int i = 0; i < 10; i++) sum=(sum+dp[i]) % 10007;
  cout << sum << endl;
  return 0;
}
