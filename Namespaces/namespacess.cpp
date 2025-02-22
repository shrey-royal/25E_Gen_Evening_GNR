#include<iostream>
using namespace std;

namespace Math {
    int add(int a, int b) {
        return a+b;
    }

    int subtract(int a, int b) {
        return a-b;
    }

    int square(int x) {
        return x*x;
    }

    namespace Geometry {
        const double PI = 3.1415;

        class Circle {
        private:
            double radius;

        public:
            Circle(double r) : radius(r) {}

            double getRadius() {
                return radius;
            }

            double area() {
                return PI * radius * radius;
            }

            double circumference() {
                return 2 * PI * radius;
            }
        };
    }
}

namespace Physics {
    float velocity(float distance, float time) {
        return distance / time;
    }

    double kineticEnergy(double mass, double velocity) {
        return 0.5 * mass * velocity * velocity;
    }
}

int main() {
    using namespace Math;
    using namespace Physics;
    using namespace Math::Geometry;
    
    cout << "5 + 3 = " << add(5, 3) << endl;
    cout << "5 - 3 = " << subtract(5, 3) << endl;
    cout << "Velocity: " << velocity(100, 10) << endl;

    cout << "Square of 5: " << square(5) << endl;

    Circle circle(3.0);

    cout << "Circle radius: " << circle.getRadius() << endl;
    cout << "Circle area: " << circle.area() << endl;
    cout << "Circle circumference: " << circle.circumference() << endl;

    cout << "Kinetic Energy: " << kineticEnergy(10.0, 5.0) << endl;

    return 0;
}