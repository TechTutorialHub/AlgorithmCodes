//problem reduction
#include <iostream>
#include <cmath>

using namespace std;

// Function to solve the quadratic equation
void solveQuadraticEquation(double a, double b, double c) {
    cout << "Given Quadratic Equation: " << a << "x^2 + " << b << "x + " << c << " = 0\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << "\n\n";

    cout << "Step 1: Compute the Discriminant (D = b^2 - 4ac)\n";
    double D = (b * b) - (4 * a * c);
    cout << "D = (" << b << "^2) - (4 * " << a << " * " << c << ") = " << D << "\n\n";

    // Check nature of roots
    if (D > 0) {
        cout << "Step 2: Discriminant is positive. Two real and distinct roots exist.\n";
        cout << "Step 3: Compute the Square Root of D: sqrt(D)\n";
        double sqrtD = sqrt(D);
        cout << "sqrt(" << D << ") = " << sqrtD << "\n\n";

        cout << "Step 4: Compute Roots using the Quadratic Formula:\n";
        cout << "x = (-b ± sqrt(D)) / (2a)\n\n";

        double x1 = (-b + sqrtD) / (2 * a);
        double x2 = (-b - sqrtD) / (2 * a);

        cout << "x1 = (-" << b << " + " << sqrtD << ") / (2 * " << a << ") = " << x1 << "\n";
        cout << "x2 = (-" << b << " - " << sqrtD << ") / (2 * " << a << ") = " << x2 << "\n\n";

        cout << "Final Answer:\n";
        cout << "✔ x = " << x1 << "  OR  x = " << x2 << "  ✅\n";
    }
    else if (D == 0) {
        cout << "Step 2: Discriminant is zero. One real and equal root exists.\n";
        double x = -b / (2 * a);
        cout << "Step 3: Compute Root using Quadratic Formula:\n";
        cout << "x = (-" << b << ") / (2 * " << a << ") = " << x << "\n\n";

        cout << "Final Answer:\n";
        cout << "✔ x = " << x << " \n";
    }
    else {
        cout << "Step 2: Discriminant is negative. No real roots (Complex Roots Exist).\n";
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        cout << "Step 3: Compute Real and Imaginary Parts:\n";
        cout << "Real Part = (-" << b << ") / (2 * " << a << ") = " << realPart << "\n";
        cout << "Imaginary Part = sqrt(" << -D << ") / (2 * " << a << ") = " << imagPart << "\n\n";

        cout << "Final Answer:\n";
        cout << "✔ x = " << realPart << " + " << imagPart << "i  OR  x = " << realPart << " - " << imagPart << "i \n";
    }
}

int main() {
    double a, b, c;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Error: Coefficient 'a' cannot be zero (Not a quadratic equation)." << endl;
        return 1;
    }

    solveQuadraticEquation(a, b, c);

    return 0;
}
