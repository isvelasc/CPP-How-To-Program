#include <iostream>

int main() {

   int a, b, c;

   std::cout << "Input three different integers: ";
   std::cin >> a >> b >> c;

   std::cout << "Sum is " << a + b + c << "\n";
   std::cout << "Average is " << (a + b + c)/3 << "\n";
   std::cout << "Product is " << a * b * c << "\n";

   if (a < b && a < c)
      std::cout << "Smallest is " << a << "\n";
   else if (b < a && b < c)
      std::cout << "Smallest is " << b << "\n";
   else
      std::cout << "Smallest is " << c << "\n";

   if (a > b && a > c)
      std::cout << "Largest is " << a << "\n";
   else if (b > a && b > c)
      std::cout << "Largest is " << b << "\n";
   else
      std::cout << "Largest is " << c << "\n";
}
