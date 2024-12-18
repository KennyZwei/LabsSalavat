#include<iostream>
#include<cmath>
using namespace std;
float prog(float a, int n);
int main()
{
	float tn = -3e0, tk = 0.3e1, dt = 2;
	int n = 2;
	cout << "\n\tt" << "\ty\n\n";
	for (float t = tn;t < tk + dt / 2;t += dt)
		cout << "\t" << t << "\t" << prog(t, n) << endl;
	system("pause");
	return 0;
}
float prog(float a, int nn)
{
	float fi = 2.e1, u = 1.;
	for (int i = 1;i <= nn;i++)
	{
		u *= a * a;
		fi -= u / i;
	}
	return fi;
}