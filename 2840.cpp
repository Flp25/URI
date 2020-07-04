#include <iostream>

using namespace std;

const float pi = 3.1415;

int main() {

	unsigned r, l, v;
	int unidades = 0, meta;

	cin >> r >> l;

	r *= r * r; // r ^ cubo;
	v = (4.0 / 3.0) * (pi * r); // volume esfera = (4/3) * (pi * r ^ cubo);

	
	while (1) {

		if (l >= v) {

			l -= v;
			unidades++;

		}
		else
			break;
			

	}


	cout << unidades << endl;

	return 0;
}