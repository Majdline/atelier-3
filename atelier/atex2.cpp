#include <iostream>
using namespace std;
class Shape
{
protected: // indique les meumbres se classe accessibles aux membres de classes derive 
    float x, y;
public:
    Shape(float _x, float _y) // construcreur parametrique 
    {
        x = _x;
        y = _y;
    }
};
class Rectangle : public Shape // class Rectangle herite de  class shape
{
public:
    Rectangle(float _x, float _y) : Shape(_x, _y) {}
    float area() // une methode 
    {
        return (x * y);
    }
};
class Triangle : public Shape
{
public:
    Triangle(float _x, float _y) : Shape(_x, _y) {}
    float area()
    {
        return (x * y / 2);
    }
};
int main() {
    Rectangle rectangle(1, 2); // un objet
    Triangle triangle(3, 4);
    cout << rectangle.area() << endl;  //  appel de fonction area()
    cout << triangle.area() << endl;
    return 0;
}