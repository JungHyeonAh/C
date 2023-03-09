#include <iostream>     // 전처리 지시자 : 함수 사용 시 함수의 원형을 미리 정의

using namespace std;
// namespace : 자신만의 이름 공간을 생성해, 충돌이 일어나지 않도록 함.
//   -> 오픈소스나 다른 사람의 소스가져올 때 함수명이 겹치면 컴파일 오류가 발생할 수 있기 때문에 이름으로 구분 
// std : C++ 표준에서 정의한 이름 공간


// main에서 return문 생략 가능
int main()
{
    printf("Hello, World!");
    cout << "Hello, World!" << endl;
    // = cout << "Hello, World!";
/*
    namespace를 안쓴 경우
    -> std::cout
*/
    return 0;
    // https://0ver-grow.tistory.com/835
}