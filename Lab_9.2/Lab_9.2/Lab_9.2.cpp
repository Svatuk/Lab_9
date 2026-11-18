#include <iostream>
#include "macros.h"
using namespace std;

int main()
{
	double x, y, w;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

#if EQUAL(Z, 1)
	w = MAX(SQR(x - y), ABS(y - x));
#else
	w = MIN((x + SQR(y)), (Z + SQR(x)));
#endif
	PRINT(w);
	return 0;
}