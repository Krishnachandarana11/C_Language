#include <iostream>

using namespace std;

// Function to calculate the area of a triangle
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the sum of all digits of a number
int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    // Given base and height
    double base = 56.0;
    double height = 21.0;

    // Calculate the area of the triangle
    double area = calculateArea(base, height);

    // Print the area of the triangle
    cout << "Area of the triangle: " << area << " square units" << endl;

    // Calculate the sum of all digits of the area
    int sum = sumOfDigits(static_cast<int>(area));

    // Print the sum of all digits of the area
    cout << "Sum of all digits of the area: " << sum << endl;

    return 0;
}
