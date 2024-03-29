#include <iostream>
using namespace std;

int main() {
  vector<int> N(10);
  long long int a;
  int max_num = 0;
  int max_size = 0;
  cin >> a;
  while(a){
    N[a%10] +=1;
    a/=10;
  }

  for(int i=0;i<=10;i++){
    if(max_size<N[i]){
      max_size = N[i];
      max_num = i;
    } else if(max_size == N[i]){
      if(max_num<i){
        max_num = i;
      }
    }
  }
  cout << max_num << endl;
}