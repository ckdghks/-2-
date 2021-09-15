/* Ex. 2-2
#include <iostream>
using namespace std;  // std:: 생략 가능

double area(int r); // 함수 원형 선언

int main() {
  int n=3;
  char c='#';

  cout << c << 5.5 << '-' << n << "hello" << true << endl;  // true는 1로 출력됨.
  cout << "n + 5 = " << n + 5 << '\n';
  cout << "면적은 " << area(n);
  //이름 공간(namespace) :: 이름
  return 0;
}

double area(int r) {  // 함수 구현
  return 3.14*r*r;  // 반지름 r의 원 면적 반환
}
*/