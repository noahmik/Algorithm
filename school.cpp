//04. 나이 차이
//N명의 나이가 입력됩니다 N명의 사람중 가장 나이차이가 많이 나는 경우를 고르시오

//입력
//첫줄에 자연수 N이 입력되고, 그다음에 N개의 나이가 입력된다.

//출력
// 첫줄에 최대나이차를 출력합니다
#include "iostream"
#include <climits>

using namespace std;

int main(){
  freopen("ex04_input.txt", "rt", stdin);
  int n,a;
  int max =0;
  int min = INT_MAX;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    if (a > max)
      max = a;
    if (a < min)
      min= a;
  }

  int max_diff = max - min;
  cout << max_diff << endl;

}