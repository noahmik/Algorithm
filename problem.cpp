#include <iostream>
#include <vector>

using namespace std;

int main() {
  int A,B,MAX = -100,MAX_mid=0;
  cin >> A >> B;
  int *C = new int[A];
  for(int i=0;i<A;i++){
    cin >> C[i];
  }

  for(int j=0;j<A-B;j++){
    for(int g=j;g<j+B;g++){
      MAX_mid = MAX_mid + C[g];
    }
    if(MAX_mid>MAX){
      MAX = MAX_mid;
    }
    MAX_mid = 0;
  }
  cout << MAX;
}