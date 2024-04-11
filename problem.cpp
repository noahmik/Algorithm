#include <iostream>
#include <vector>

using namespace std;

int main() {
  int A;
  int LTS=0,LTS_N=0;
  cin >> A;
  int *B = new int[A];
  for(int i=0;i<A;i++){
    cin >> B[i];
  }
  for(int j=0;j<A;j++){
    if(B[j]<=B[j+1]){
      LTS_N = LTS_N + 1;
      if(LTS<LTS_N){
        LTS = LTS_N;
      }
    } else {
      LTS_N = 0;
    }
  }
  cout << LTS+1;
}