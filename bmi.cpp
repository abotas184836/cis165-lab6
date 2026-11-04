#include <iostream>
#include <iomanip>

int main()
{
    double weight;
    std::cout << "Enter weight in pounds: ";
    std::cin >> weight;
    
    double height;
    std::cout << "Enter height in inches: ";
    std::cin >> height;
    
    double bmi = weight * 703.0 / (height * height);
    
    std::cout << std::fixed << std::setprecision(2);
    
    if ( height <= 0.0 || weight <= 0.0 ) {
        std::cout << "Error: weight and height must be positive.";
    }
    
    if ( bmi < 18.5 ) {
        std::cout << "Calculated BMI: " << bmi << " — Underweight";
    } else if ( bmi >= 18.5 && bmi <= 25.0 ) {
        std::cout << "Calculated BMI: " << bmi << " — Optimal weight";
    } else if ( bmi > 25.0 ) {
        std::cout << "Calculated BMI: " << bmi << " — Overweight";
    }
    
    return 0;
}