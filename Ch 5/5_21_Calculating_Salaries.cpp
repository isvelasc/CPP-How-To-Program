#include <iostream>

int main() {

   int num_employees = 0;
   double min_salary = 650.0;
   double min_wage = 10.0;
   double min_item_payment = 1.50;
   double total_payment = 0;

   while (num_employees < 1) {
      std::cout << "Enter the number of employees: ";
      std::cin >> num_employees;
   }

   for ( ; num_employees > 0; --num_employees) {

      int code = 0;
      while (code < 1 || code > 4) {
         std::cout << "Enter pay code (1-4): ";
         std::cin >> code;
      }

      double salary = 0;
      double payment = 0;
      double hourly_wage = 0;
      int hours = 0;
      double gross_sales = 0.00;
      int items = 0;
      double item_payment = 0;

      switch (code) {
         case 1:
            while (salary < min_salary) {
               std::cout << "Enter managerial weekly salary: $";
               std::cin >> salary;
            }
            total_payment += salary;

            std::cout << "\nWeekly payment: $" << salary << "\n";
            break;

         case 2:

            while (hours < 1) {
               std::cout << "Enter hours for the week: ";
               std::cin >> hours;
            }

            while (hourly_wage < min_wage) {
               std::cout << "Enter hourly wage: $";
               std::cin >> hourly_wage;
            }

            if (hours > 40)
               payment += 40 * hourly_wage + (hours % 40) * (hourly_wage * 1.5);
            else
               payment += hourly_wage * hours;

            total_payment += payment;

            std::cout << "\nWeekly payment: $" << payment << "\n";
            break;

         case 3:

            while (gross_sales < 0.01) {
               std::cout << "Enter weekly gross sales: $";
               std::cin >> gross_sales;
            }

            payment += 250 + 0.057 * gross_sales;
            total_payment += payment;

            std::cout << "\nWeekly payment: $" << payment << "\n";
            break;

         case 4:

            while (items < 1) {
               std::cout << "Enter number of pieces made: ";
               std::cin >> items;
            }

            while (item_payment < min_item_payment) {
               std::cout << "Enter per piece payment: ";
               std::cin >> item_payment;
            }

            payment += items * item_payment;
            total_payment += payment;

            std::cout << "\nWeekly payment: $" << payment << "\n";
            break;

         default:
            break;
      }

      std::cout << "\n";
   }

   std::cout << "\nTotal payments made for this week: $" << total_payment << std::endl;

   return 0;
}
