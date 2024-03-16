#include <iostream>
#include <vector>

using namespace std;

class Cat {
private:
    int mAge;
public:
    explicit Cat(int age) : mAge(age) {}

    void speak() const{
      cout << "meow~" << mAge << endl;
    }

    int getMAge() const {
      return mAge;
    }
};

int main() {
  vector<Cat> cats;
  cats.emplace_back(Cat{1});
  cats.emplace_back(Cat{2});
  cats.emplace_back(Cat{3});
  cats.emplace_back(Cat{4});
  cats.emplace_back(Cat{5});

  // 고양이 전체 출력
  for (const auto &cat: cats) {
    cat.speak();
  }
  cout << endl;

//벡터 순회방법 1을 활용하여 나이가 3살인 고양이를 찾고 출력(speak로)
  for (size_t i = 0; i < cats.size(); ++i) {
    if (cats[i].getMAge() == 3)
      cats[i].speak();
  }

//벡터 순회방법 2를 활용하여 나이가 4살인 고양이를 찾고 출력(pointer이기에 화살표 연산자)
  for (auto itr = cats.begin(); itr < cats.end(); itr++) {
    if (itr->getMAge() == 4)
      itr->speak();
  }

//벡터 순회방법 3을 활용하여 나이가 5살인 고양이를 찾고 출력
  for (auto cat: cats) {
    if (cat.getMAge() == 5)
      cat.speak();
  }

  return 0;
}