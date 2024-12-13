#include<iostream>
#include<cmath>
using namespace std;
const float a1 = -5, a2 = 7, b1 = -6, b2 = 7, radius1 = 2, x01 = 0, y01 = 3, radius2 = 3, x02 = 0, y02 = -2;

float rand_float(float M, float N)
{
	return M + (N - M) * rand() / RAND_MAX;
}

float calculatecircleX(float y, float radius, float x0, float y0) {
	return sqrt(radius * radius - pow(y - y0, 2)) + x0;
}

bool pointInSmallCircle(float point[2]) {
	if (point[0] > x01) {
		return false;
	}

	float x = -calculatecircleX(point[1], radius1, x01, y01);
	if (isnan(x)) {
		return false;
	}

	if (point[0] < x) {
		return false;
	}

	return false;
}

bool pointInBigCircle(float point[2]) {
	if (point[0] < x01) {
		return false;
	}

	float x = calculatecircleX(point[1], radius2, x02, y02);
	if (isnan(x)) {
		return false;
	}

	if (point[0] > x) {
		return false;
	}

	return true;
}

bool pointInCircles(float point[2]) {
	return pointInSmallCircle(point) || pointInBigCircle(point);
}

void generatePoint(float point[2])
{
	point[0] = rand_float(a1, a2);
	point[1] = rand_float(b1, b2);
}

int main()
{
	float point[2];
	char* end;
	string input;
	srand(time(NULL));
	while (true) {
		
		cout << "enter something: ";
		cin >> input;
		int value = strtof(input.c_str(), &end);
		if (!*end && value == 0) {
			break;
		}
		generatePoint(point);
		cout << "point x = " << point[0] << " y = " << point[1] << endl;
		if (pointInCircles(point)) {
			cout << "point in the shaded area" << endl;
		}
		else {
			cout << "point not in the shaded area" << endl;
		}
	}
	return 0;
}