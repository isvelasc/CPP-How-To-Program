#include <iostream>

int main() {

   int a, b, c, d, e;
   std::cout << "Enter 5 integers: ";
   std::cin >> a >> b >> c >> d >> e;

   if (a > b && a > c && a > d && a > e)
      std::cout << "The largest is " << a << "\n";
   else if (b > a && b > c && b > d && b > e)
      std::cout << "The largest is " << b << "\n";
   else if (c > b && c > a && c > d && c > e)
      std::cout << "The largest is " << c << "\n";
   else if (d > b && d > c && d > a && d > e)
      std::cout << "The largest is " << d << "\n";
   else
      std::cout << "The largest is " << e << "\n";

   if (a < b && a < c && a < d && a < e)
      std::cout << "The smallest is " << a << "\n";
   else if (b < a && b < c && b < d && b < e)
      std::cout << "The smallest is " << b << "\n";
   else if (c < b && c < a && c < d && c < e)
      std::cout << "The smallest is " << c << "\n";
   else if (d < b && d < c && d < a && d < e)
      std::cout << "The smallest is " << d << "\n";
   else
      std::cout << "The smallest is " << e << "\n";
}
