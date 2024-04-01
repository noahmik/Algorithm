#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool areAnagrams(const string& word1, const string& word2) {
  if (word1.length() != word2.length()) {
    return false;
  }

  // 두 단어를 정렬하여 순서를 맞춘 후 비교
  string sorted_word1 = word1;
  string sorted_word2 = word2;
  sort(sorted_word1.begin(), sorted_word1.end());
  sort(sorted_word2.begin(), sorted_word2.end());

  return sorted_word1 == sorted_word2;
}

int main() {
  string str1, str2;
  cin >> str1 >> str2;

  if (areAnagrams(str1, str2)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
