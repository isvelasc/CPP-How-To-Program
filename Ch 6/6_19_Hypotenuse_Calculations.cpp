#include <iostream>
#include <cmath>
#include <iomanip>


void line() {
   for (int i = 0; i < 42; ++i) {
      std::cout << "-";
   }
}


void header() {
   std::cout << "Triangle"
      << std::setw( 10 ) << "Side 1"
      << std::setw( 10 ) << "Side 2"
      << std::setw( 14 ) << "Hypotenuse\n";
      line();
      std::cout << std::endl;
}


inline double hypotenuse(double side1, double side2) {
   return sqrt( side1 * side1 + side2 * side2 );
}


void displayTriangle(int t, double side1, double side2, double h) {
   std::cout << std::fixed << std::setprecision( 1 );
   std::cout << t
      << std::setw( 17 ) << side1
      << std::setw( 10 ) << side2
      << std::setw( 14 ) << h
      << std::endl;
}


int main() {

   header();
   displayTriangle(1, 3, 4, hypotenuse(3, 4));
   displayTriangle(2, 5, 12, hypotenuse(5, 12));
   displayTriangle(3, 8, 15, hypotenuse(8, 15));

   return 0;
}
