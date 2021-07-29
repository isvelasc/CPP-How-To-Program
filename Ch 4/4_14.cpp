#include <iostream>
#include <iomanip>

int main() {

   int hours = 0;
   double hourly_rate = 0;

   std::cout << "Enter hours worked (-1 to end): ";
   std::cin >> hours;

   while (hours != -1) {
      std::cout << "Enter hourly rate of the employee ($00.00): ";
      std::cin >> hourly_rate;

      std::cout << std::setprecision(2) << std::fixed;
      if (hours <= 40)
         std::cout << "Salary is $" << hours * hourly_rate << "\n";
      else {
         double overtime = (hours % 40) * (hourly_rate * 1.5);
         std::cout << "Salary is $" << 40 * hourly_rate + overtime << "\n";
      }

      std::cout << "\nEnter hours worked (-1 to end): ";
      std::cin >> hours;
   }

   return 0;
}
