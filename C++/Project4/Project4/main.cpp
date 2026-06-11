#include <iostream>
using namespace std;
/*int main() {
	int num1, num2;
	cin >> num1 >> num2;
	cout << num1 + num2;
}
int main() {
	int num1, num2;
	cin >> num1 >> num2;
	cout << "큰 수 : " << (num1 > num2 ? num1 : num2);
}*/
#include <string>
/*int main() {
    string answer;
	do {
		int score;
		cout << "입력 : ";
		cin >> score;
		switch (score / 10) {
		case 10: cout << 'A' << endl; break;
		case 9: cout << 'B' << endl; break;
		default: cout << 'F' << endl;
		}		
		cout << "계속 ?" << endl;
		cin >> answer;
	} while (answer == "yes");
}
int main() {
	int first, last;
	cout << "첫 : "; cin >> first;
	cout << "끝 : "; cin >> last;
	for (int i = 1; i <= 9; i++) {
		for (int k = first; k <= last; k++) {
			cout << k << "x" << i << "=" << i * k << '\t';
		}cout << endl;
	}
}
int Larger(int a, int b) {
	return (a > b ? a : b);}
int main() {
	int a, b;
	cout << "두 수 : "; cin >> a >> b;
	cout << "큰 수 : " << Larger(a, b);
}
bool Multiple(int a, int b) {
	if (a % b == 0) { return 1; }
	else { return 0; }
}int main() {
	int a, b; cin >> a >> b;
	bool result = Multiple(a, b);
	if (Multiple(a, b) == 1) { cout << "yes"; }
	else { cout << "no"; }
}*/
class Rectangle {
	int width, height;
	Rectangle(); Rectangle(int h,int w);
	Rectangle(int length); bool Square();
};
Rectangle::Rectangle() { width = height = 1; }
Rectangle::Rectangle(int h, int w) { h = height; w = width; }
Rectangle::Rectangle(int length) { length = width = height; }
bool Rectangle::Square(){ if (width == height)
return 1;
else return 0; }
int main() {
	Rectangle.rect1;
	Rectangle.rect2(3, 5);
	Rectangle.rect3(3);
}