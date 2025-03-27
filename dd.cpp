#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a = 2, b = 25, c = 0;
    double D = b * b - 4 * a * c;
    if (D >= 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else {
        cout << "Уравнение не имеет вещественных корней" << endl;
    }
    return 0;
}


