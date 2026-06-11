#include <iostream>
using namespace std;
/*
class Circle {
public:
	int radius;
	double getarea();
};
double Circle::getarea() {
	return radius * radius * 3.14;
}
int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getarea();
	cout << "donut¸éÀû" << area<<'\n';
}
class Rectangle {
public:
	int width; int height;
	double getarea();
};
double Rectangle::getarea() {
	return width * height;
}
int main() {
	Rectangle rect;
	rect.width = 3; rect.height = 5;
	cout << rect.getarea() << '\n';
}
*/
class circle {
public:
	int radius; 
	circle(); circle(int r); double getarea();
};
circle::circle() { radius = 1; cout << "qkswlfma" << radius<<endl; }
circle::circle(int r) { radius = r; cout << "qkswlfma " << r<<endl; }
double circle::getarea() { return 3.14 * radius * radius; }
int main() {
	circle donut; double area = donut.getarea();
	cout << "donut : " << area<<endl;
	circle pizza(30); area = pizza.getarea();
	cout << "pizza : " << area << endl;
}