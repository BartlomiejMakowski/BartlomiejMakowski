


#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Vector2D;


class Vector2D
{
private:

    double Cx;
    double Cy;
public:
    Vector2D();
    Vector2D(double x, double y);
    ~Vector2D();
    double getX();
    double getY();
    void setX(double value);
    void setY(double value);
    void show();
    friend bool operator==(Vector2D& a, Vector2D& b);
    friend Vector2D operator+(Vector2D a, Vector2D b);
    friend Vector2D operator-(Vector2D a, Vector2D b);
};

Vector2D::Vector2D() {
    Cx = 0;
    Cy = 0;
}

Vector2D::Vector2D(double x, double y) {
    Cx = x;
    Cy = y;
}

Vector2D::~Vector2D() {}

double Vector2D::getX() {
    return Cx;
}

double Vector2D::getY() {
    return Cy;
}

void Vector2D::setX(double value) {
    Cx = value;
}

void Vector2D::setY(double value) {
    Cy = value;
}

void Vector2D::show()
{
    cout << "Wektor: [" << Cx << "," << Cy << "]" << endl;
}

bool operator==(Vector2D& a, Vector2D& b)
{
    if (a.getX() != b.getX()) {
        return false;
    }
    if (a.getY() != b.getY()) {
        return false;
    }
    return true;
}

Vector2D operator+(Vector2D a, Vector2D b)
{
    double Cx, Cy;
    Cx = a.getX() + b.getX();
    Cy = a.getY() + b.getY();
    Vector2D v = Vector2D(Cx, Cy);
    return v;
}

Vector2D operator-(Vector2D a, Vector2D b)
{
    double Cx, Cy;
    Cx = a.getX() - b.getX();
    Cy = a.getY() - b.getY();
    Vector2D v = Vector2D(Cx, Cy);
    return v;
}

int main()
{
    Vector2D v1;
    Vector2D v2(2, 3);
    Vector2D v3(2, 4);
    Vector2D v4(3, 5);
    Vector2D v5(4, 6);

    v1.show();
    v2.show();
    v3.show();
    v4.show();
    v5.show();

    if (v2 == v3) {
        cout << "v2 jest rowny v3" << endl;
    }
    if (!(v2 == v4)) {
        cout << "v2 nie jest rowny v4" << endl;
    }
    if (!(v2 == v5)) {
       cout << "v2 nie jest rowny v5" << endl;
    }

    Vector2D v6 = v2 + v3;
   cout << "v2 + v3: " << endl;
    v6.show();
    cout << "v2 - v3: " << endl;
    Vector2D v7 = v2 - v3;
    v7.show();


}
