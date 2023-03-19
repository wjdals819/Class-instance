#include <iostream>
using namespace std;

//원의 넓이를 구하는 클래스

class Circle {
public:
	int radius;
	double circleSize();
};

double Circle::circleSize() {
	return radius * radius * 3.14;
}

int main() {
	Circle circle;

	cout << "원의 반지름을 구하는 프로그램입니다." << endl;
	cout << "숫자 외 문자가 입력될 시 모든 값은 0으로 반환됩니다." << endl;
	cout << endl;

	cout << "원의 반지름을 입력하세요:";
	cin >> circle.radius;

	cout << "원의 넓이:" << circle.circleSize();
	cout << endl;

}
