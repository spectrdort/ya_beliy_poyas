#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
	double a, b, c, d, x, y;
	cin >> a >> b >> c;
	// Тупые примеры //
	if (a == 0 && b != 0 && c != 0) {
		x = -c / b;
		cout << x;
		return 0;
	}
	if (a != 0 && b == 0 && c != 0) {
		x = sqrt(-c / a);
		cout << x;
		return 0;
	}
	if (a != 0 && b != 0 && c == 0) {
		x = 0;
		y = -b / a;
		cout << x << " " << y;
		return 0;
	}
	// Наитупейшие решения //
	if (a == 0 && b == 0 && c != 0) {
		cout << "Тупое решение, но типа с = 0 - бред";
		return 0;
	}
	if (a == 0 && b != 0 && c == 0) {
		x = 0 / b;
		cout << x;
		return 0;
	}
	if (a != 0 && b == 0 && c == 0) {
		x = sqrt(0 / a);
		cout << x;
		return 0;
	}
	// Дискриминант //
	d = (b * b) - (4 * a * c);
	if (d == 0) {
		x = -b / (2 * a);
		cout << x;
		return 0;
	}
	// Решения //
	if (d > 0) {
		x = (-b + sqrt(d)) / (2 * a);
		y = (-b - sqrt (d)) / (2 * a);
		cout << x << " " << y;
		return 0;
	}
	if (d < 0) {
		cout << " ";
		return 0;
	}

}

