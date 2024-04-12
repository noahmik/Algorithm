#include <iostream>
#include <vector>

using namespace std;

int main() {
  int A,result=0;
  bool N= false;
  cin >> A;
  int *B = new int[A];

  for(int i=0;i<A;i++){
    cin >> B[i];
  }

  for(int j=0;j<A;j++){
    for(int g=0;g<A;g++){
      if(!N){
      if(B[j] - B[j+1] == B[g]){
        result +=1;
        N = true;
      } else if (B[j+1] - B[j] == B[g]){
        result +=1;
        N = true;
      }
     }
    }
    N= false;
  }
  if(result == A){
    cout << "YES";
  } else {
    cout << "NO";
  }
}