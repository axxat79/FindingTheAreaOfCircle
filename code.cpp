#include <iostream>
#include "circle.h"
using namespace std;

int main(){
	double r;
	cout << "Radius engiz: ";
	cin >> r;
	double s = area(r);
	double l = Line(r);
	cout << "Shenber audany: " << s;
	cout << "Shenber uzindigi: " << l;
	return 0;
}