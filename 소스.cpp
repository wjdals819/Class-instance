#include <iostream>
using namespace std;

//���� ���̸� ���ϴ� Ŭ����

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

	cout << "���� �������� ���ϴ� ���α׷��Դϴ�." << endl;
	cout << "���� �� ���ڰ� �Էµ� �� ��� ���� 0���� ��ȯ�˴ϴ�." << endl;
	cout << endl;

	cout << "���� �������� �Է��ϼ���:";
	cin >> circle.radius;

	cout << "���� ����:" << circle.circleSize();
	cout << endl;

}
