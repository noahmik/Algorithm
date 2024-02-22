// https://nypc.github.io/2018/2018_online_3
#include <iostream>

using namespace std;

int main() {
  int P,Q,W;
  int x,y;
  cin >> P >> Q;
  cin >> W;
  for(x=0; x<=W ;x++){
    for(y=0 ;y<=W ;y++){
      if((P*x) + (Q*y) == W){
        cout << x <<" "<< y <<endl;
        return 0;
      }
    }
  }
}

//선생님 코드
//for(x = 1;p*x<=w;x++){
//if((w-(p*x))%q ==0){
//cout << x << " " << (w-(p*x)) /q <<endl;
//break;
//}
//}