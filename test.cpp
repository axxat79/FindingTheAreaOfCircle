#include <iostream>
#include "circle.h"
using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
    double r;
    cout << "Радиус енгіз: ";
    cin >> r;

    // Проверка 1: радиус не минус
    if (r > 0)
        cout << "[PASS] Радиус положительный\n";
    else
        cout << "[FAIL] Радиус не может быть минусом!\n";

    // Проверка 2: радиус не ноль
    if (r != 0)
        cout << "[PASS] Радиус не равен нулю\n";
    else
        cout << "[FAIL] Радиус не может быть нулем!\n";

    return 0;
}
