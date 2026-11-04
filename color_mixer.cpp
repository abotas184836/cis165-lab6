#include <iostream>
#include <iomanip>
#include <cstring>

int main()
{
    const int COLOR_SIZE = 20;
    
    std::cout << "Enter a primary-color in lowercase: ";
    char first_color[COLOR_SIZE];
    std::cin >> std::setw(COLOR_SIZE) >> first_color;

    std::cout << "Enter a second primary-color in lowercase: ";
    char second_color[COLOR_SIZE];
    std::cin >> std::setw(COLOR_SIZE) >> second_color;
    
    if ( (strcmp(first_color, "red") != 0) && (strcmp(first_color, "blue") != 0) && (strcmp(first_color, "yellow") != 0) ) {
        std::cout << "Error: enter red, blue, or yellow.";
    }
    
    if ( (strcmp(second_color, "red") != 0) && (strcmp(second_color, "blue") != 0) && (strcmp(second_color, "yellow") != 0) ) {
        std::cout << "Error: enter red, blue, or yellow.";
    }
        
    if ( (strcmp(first_color, "red") == 0) && (strcmp(second_color, "blue") == 0) ) {
        std::cout<<"purple";
    } else if ( (strcmp(first_color, "red") == 0) && (strcmp(second_color, "yellow") == 0) ) {
        std::cout<<"orange";
    } else if ( (strcmp(first_color, "red") == 0) && (strcmp(second_color, "red") == 0) ) {
        std::cout<<"red"; 
    } else if ( (strcmp(first_color, "blue") == 0) && (strcmp(second_color, "red") == 0) ) {
        std::cout<<"purple";
    } else if ( (strcmp(first_color, "blue") == 0) && (strcmp(second_color, "yellow") == 0) ) {
        std::cout<<"green";
    } else if ( (strcmp(first_color, "blue") == 0) && (strcmp(second_color, "blue") == 0) ) {
        std::cout<<"blue";
    } else if ( (strcmp(first_color, "yellow") == 0) && (strcmp(second_color, "blue") == 0) ) {
        std::cout<<"green";
    } else if ( (strcmp(first_color, "yellow") == 0) && (strcmp(second_color, "red") == 0) ) {
        std::cout<<"orange";
    } else if ( (strcmp(first_color, "yellow") == 0) && (strcmp(second_color, "yellow") == 0) ) {
        std::cout<<"yellow";
    }
    
    return 0;
}