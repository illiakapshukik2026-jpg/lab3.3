#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр (радіус)
    double y; // результат обчислення функції

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // Розгалуження у повній формі (if...else if...else)
    if (x <= -5)
        y = -3;
    else if (x <= -R)
        y = 3.0 * (x + R) / (5.0 - R);
    else if (x <= R)
        y = sqrt(R * R - x * x);
    else if (x <= 8)
        y = R * (x - R) / (8.0 - R);
    else
        y = R;

    cout << fixed << setprecision(4);
    cout << endl << "y = " << y << endl;

    cin.get();
    return 0;
}