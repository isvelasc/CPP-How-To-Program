#include <iostream>

int main() {

   double side1 = 0;
   double side2 = 0;
   double side3 = 0;

   while (side1 <= 0){
      std::cout << "Enter side one   ( > 0 ): ";
      std::cin >> side1;
   }

   while (side2 <= 0){
      std::cout << "Enter side two   ( > 0 ): ";
      std::cin >> side2;
   }

   while (side3 <= 0){
      std::cout << "Enter side three ( > 0 ): ";
      std::cin >> side3;
   }

   if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
      std::cout << side1 << " " << side2 << " " << side3 << " form a triangle\n";
   else
      std::cout << side1 << " " << side2 << " " << side3 << " do not form a triangle\n";

   return 0;
}
