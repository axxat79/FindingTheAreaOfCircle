#include <iostream>
#include "circle.h"
using namespace std;

int main(){
	double r;
	cout << "Radius engiz: ";
	cin >> r;
	double s = area(r);
	cout << "Shenber audany: " << s;
	return 0;
}