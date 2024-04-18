#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a,b,result = 0;
  cin >> a;
  vector<int> c(a);
  cin >> b;
  for(int i=0;i<a;i++){
    cin >> c[i];
  }

  for(int j=0;j<a;j++){
    for(int k=0;k<a;k++){
      if(c[j]+c[k] == b){
        result++;
        break;
      }
    }
  }

  cout << result/2;
}