#include <iostream>
#include <vector>
#include <queue> queue<int> q;

using namespace std;

int main() {
  int N;
  queue<int> que; //queue 생성
  cin >> N;

  for(int i=1;i<=N;i++){
    que.push(i); //queue에 값들 순서대로 push
  }

  while (que.size() > 1) { //queue에 요소가 하나만 남을때까지 pop 반복
    que.pop();
    que.push(que.front());
    que.pop();
  }

  cout << que.front();
}