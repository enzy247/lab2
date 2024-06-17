#include <iostream>
#include <cmath>
#include <random>

using namespace std;

/*double rnd(double min, double max) {
    static random_device rd;
    static mt19937 gen(rd());
    uniform_real_distribution<> dis(min, max);
    return dis(gen);
}

int main() {
    double a1 = rnd(-10, 10);
    double b1 = rnd(-10, 10);
    double c1 = rnd(-10, 10);
    double a2 = rnd(-10, 10);
    double b2 = rnd(-10, 10);
    double c2 = rnd(-10, 10);
    double x = rnd(-10, 10);
    double y = rnd(-10, 10);

    cout << "Параметры прямой 1: A = " << a1 << ", B = " << b1 << ", C = " << c1 << endl;
    cout << "Параметры прямой 2: A = " << a2 << ", B = " << b2 << ", C = " << c2 << endl;
    cout << "Заданная точка: (" << x << ", " << y << ")" << endl;

    double d1 = abs(a1 * x + b1 * y + c1) / sqrt(a1 * a1 + b1 * b1);
    double d2 = abs(a2 * x + b2 * y + c2) / sqrt(a2 * a2 + b2 * b2);
    cout << "Расстояние от заданной точки до прямой 1: " << d1 << endl;
    cout << "Расстояние от заданной точки до прямой 2: " << d2 << endl;

    double ix = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    double iy = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    cout << "Точка пересечения прямых: (" << ix << ", " << iy << ")" << endl;

    double di = sqrt(pow(x - ix, 2) + pow(y - iy, 2));
    cout << "Расстояние от заданной точки до точки пересечения прямых: " << di << endl;

    double angle = atan(abs((a1 * b2 - a2 * b1) / (a1 * a2 + b1 * b2)));
    cout << "Угол между прямыми: " << angle << " радиан" << endl;

    return 0;
}
*/
/*double rnd(double min, double max) {
    static random_device rd;
    static mt19937 gen(rd());
    uniform_real_distribution<> dis(min, max);
    return dis(gen);
}

double angle(double a1, double b1, double c1, double a2, double b2, double c2) {
    double dot = a1 * a2 + b1 * b2 + c1 * c2;
    double mag1 = sqrt(a1 * a1 + b1 * b1 + c1 * c1);
    double mag2 = sqrt(a2 * a2 + b2 * b2 + c2 * c2);
    return acos(dot / (mag1 * mag2));
}

bool isParallel(double a1, double b1, double c1, double a2, double b2, double c2) {
    return abs(a1 * b2 - a2 * b1) < 1e-9;
}

double distance(double a, double b, double c, double d) {
    return abs(d) / sqrt(a * a + b * b + c * c);
}

pair<double, double> intersect(double a1, double b1, double c1, double d1, double a2, double b2, double c2, double d2) {
    double x = (b1 * d2 - b2 * d1) / (a1 * b2 - a2 * b1);
    double y = (-a1 * d2 + a2 * d1) / (a1 * b2 - a2 * b1);
    return make_pair(x, y);
}

double distToLine(double x, double y, double z, double a, double b, double c, double d) {
    return abs(a * x + b * y + c * z + d) / sqrt(a * a + b * b + c * c);
}

int main() {
    double a1 = rnd(-10, 10), b1 = rnd(-10, 10), c1 = rnd(-10, 10), d1 = rnd(-10, 10);
    double a2 = rnd(-10, 10), b2 = rnd(-10, 10), c2 = rnd(-10, 10), d2 = rnd(-10, 10);
    double x = rnd(-10, 10), y = rnd(-10, 10), z = rnd(-10, 10);

    cout << "Уравнение прямой 1: " << a1 << "x + " << b1 << "y + " << c1 << "z + " << d1 << " = 0" << endl;
    cout << "Уравнение прямой 2: " << a2 << "x + " << b2 << "y + " << c2 << "z + " << d2 << " = 0" << endl;
    cout << "Точка: (" << x << ", " << y << ", " << z << ")" << endl;

    double ang = angle(a1, b1, c1, a2, b2, c2);
    cout << "Угол между прямыми: " << ang << " радиан" << endl;

    if (isParallel(a1, b1, c1, a2, b2, c2)) {
        cout << "Прямые параллельны" << endl;
        cout << "Расстояние между прямыми: " << distance(a1, b1, c1, d1 - d2) << endl;
    } else {
        cout << "Прямые не параллельны" << endl;
        auto inter = intersect(a1, b1, c1, d1, a2, b2, c2, d2);
        cout << "Точка пересечения: (" << inter.first << ", " << inter.second << ")" << endl;
        cout << "Расстояние от точки до точки пересечения: " << distToLine(x, y, z, a1, b1, c1, -d1) << endl;
    }

    cout << "Расстояние от точки до прямой 1: " << distToLine(x, y, z, a1, b1, c1, -d1) << endl;
    cout << "Расстояние от точки до прямой 2: " << distToLine(x, y, z, a2, b2, c2, -d2) << endl;

    return 0;
}
*/
