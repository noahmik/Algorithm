#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool Check(const string& s) {
  stack<char> a;

  for (char c : s) {
    if (c == '(') {
      a.push(c);
    } else if (c == ')') {
      if (a.empty() || a.top() != '(') {
        return false;
      } else {
        a.pop();
      }
    }
  }

  return a.empty();
}

int main() {
  string a;
  cin >> a;

  if (Check(a)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}