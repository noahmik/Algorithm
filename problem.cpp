// explicit : 명시적인, implicit : 묵시적
// ex) explicit conversion(명시적 형변환) - 컴파일러가 헷갈리게 하지 않기 위해서 개발자가 직접 형변환 시키는 경우
// int a = 3;
// int b = 4;
// double c;
// c = (double)a/b;
// ex) implicit conversion(묵시적 형변환) - 컴파일러가 자료형이 안 맞는 상황에서 지가 알아서 형변환 시키는 경우
// int a = 3;
// int b = 4;
// double c;
// c = a/b;

//결론 : 명시적으로 프로그래밍을 하는 것이 좋은 코드다.


#include <iostream>
using namespace std;

class Cat{
public:
    //생성자의 매개변수가 하나일 때는 '=' 연산자가 가능하기 때문에 묵시적 표현을 막기위해
    //생성자 앞에 explicit을 적어줘야한다.
    //생성자의 매개변수가 두개 이상일 때는 explicit을 붙여줄 필요가 없다.
    explicit Cat(string name,int age) : mName{std::move(name)}, mAge{age}{} ;
    void printCatInfo(){
      cout<<"고양이 이름은: "<<mName<<endl;
    };
private:
    string mName;
    int mAge;
};

int main() {
  string str = "kitty";
  int num = 3;
  Cat kitty{str,num};
  kitty.printCatInfo();
  return 0;
}
