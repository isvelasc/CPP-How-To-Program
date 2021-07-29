#include <iostream>
#include <iomanip>

int main() {

   int factorial = -1;

   while (factorial < 0) {
      std::cout << "Enter factorial: ";
      std::cin >> factorial;
   }

   if (factorial == 0 || factorial == 1)
      std::cout << "\n" << factorial << "! = 1\n";
   else {
      int total = 1;
      int temp = factorial;
      while (temp > 1) {
         total *= temp;
         temp--;
      }

      std::cout << factorial << "! = " << total << "\n\n";
   }


   int accuracy = -1;
   while (accuracy < 0) {
      std::cout << "Enter desired accuracy for mathematical constant e: ";
      std::cin >> accuracy;
   }

   if (accuracy == 0)
      std::cout << "2.\n";
   else if (accuracy == 1)
      std::cout << "2.5\n";
   else{

      std::cout << std::setprecision(accuracy) << std::fixed;
      double e = 2.5;
      int step = 3;
      while (accuracy > 1) {

         int temp = step;
         double inverse_fact = 1;
         while (temp > 1) {
            inverse_fact *= temp;
            temp--;
         }

         e += 1 / inverse_fact;
         accuracy--;
         step++;
      }

      std::cout << "e = " << e << "\n\n";
   }


   accuracy = -1;
   while (accuracy < 0) {
      std::cout << "Enter desired accuracy for e^x: ";
      std::cin >> accuracy;
   }

   int x;
   std::cout << "Enter x: ";
   std::cin >> x;

   if (accuracy == 0)
      std::cout << "e^" << x << " = " << 1 + x;
   else if (accuracy == 1)
      std::cout <<  "e^" << x << " = " << 1 + x + x * x / 2;
   else{

      std::cout << std::setprecision(accuracy) << std::fixed;
      double ex = 1 + x + x * x / 2;
      int step = 3;
      while (accuracy > 1) {

         int temp = step;
         double inverse_fact = 1;
         while (temp > 1) {
            inverse_fact *= temp;
            temp--;
         }

         int power = step;
         int powx = x;
         while (power > 1){
            powx *= x;
            power--;
         }

         ex += powx / inverse_fact;
         accuracy--;
         step++;
      }

      std::cout << "e^" << x << " = " << ex << "\n";
   }

   return 0;
}
