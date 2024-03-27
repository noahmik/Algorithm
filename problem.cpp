#include <iostream>

using namespace std;
int sum = 0;

void digit(int num){
  sum+=1;
  if(num/10>0){
    num = num/10;
    digit(num);
  }
}

int main(){
  int N;
  cin >> N;

  for(int i=1;i<=N;i++){
    digit(i);
  }

  cout << sum << endl;
}