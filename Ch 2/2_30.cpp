#include <iostream>

int main() {

   double weight, height;

   std::cout << "Enter your body weight in lb or kg: ";
   std::cin >> weight;
   std::cout << "Enter your height in inches or meters: ";
   std::cin >> height;

   std::cout << "\n\nYour BMI : " << (weight*703) / (height*height) << "\n\n";
   std::cout << "BMI VALUES\n";
   std::cout << "Underweight: less than 18.5\n";
   std::cout << "Normal:      between 18.5 and 24.9\n";
   std::cout << "Overweight:  between 25 and 29.9\n";
   std::cout << "Obese:       30 or greater\n";
}
