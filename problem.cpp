#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> A(10);
  vector<int> B(10);
  int A_SCORE = 0;
  int B_SCORE = 0;
  for(int i=0;i<=9;i++){
    cin >> A[i];
  }
  for(int j=0;j<=9;j++){
    cin >> B[j];
  }

  for(int l=0;l<=9;l++){
    if(A[l]>B[l]){
      A_SCORE = A_SCORE + 3;
    } else if(A[l]<B[l]){
      B_SCORE = B_SCORE + 3;
    } else if(A[l]==B[l]){
      A_SCORE = A_SCORE + 1;
      B_SCORE = B_SCORE + 1;
    }
  }

  if (A_SCORE > B_SCORE) {
    cout << A_SCORE << " ";
    cout << B_SCORE << endl;
    cout << "A";
  } else if (A_SCORE < B_SCORE) {
    cout << A_SCORE;
    cout << B_SCORE << endl;
    cout << "B";
  } else if (A_SCORE == B_SCORE){
    cout << A_SCORE;
    cout << B_SCORE << endl;
    cout << "D";
  }
}