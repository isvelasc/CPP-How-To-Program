#include <iostream>

int main() {

   int product_number = 0;
   int quantity_sold = 0;
   unsigned int product1 = 0;
   unsigned int product2 = 0;
   unsigned int product3 = 0;
   unsigned int product4 = 0;
   unsigned int product5 = 0;
   double quantity1 = 0;
   double quantity2 = 0;
   double quantity3 = 0;
   double quantity4 = 0;
   double quantity5 = 0;
   double total = 0;

   std::cout << "Enter product number (1-5) followed by quantity\n"
             << "Example: 2 10\n"
             << "Type -1 to EXIT program\n";

   while (product_number != -1) {

      std::cin >> product_number >> quantity_sold;

      if (quantity_sold < -1) {
         std::cout << "Incorrect Entry.\n";
         continue;
      }
      else if (quantity_sold == ' ' || quantity_sold == '\n' || quantity_sold == '\n')
         continue;
      else if (quantity_sold == -1)
         break;

      switch (product_number) {
         case -1:
            break;

         case 1:
            product1 += quantity_sold;
            quantity1 += 2.98 * quantity_sold;
            total += quantity1;
            break;

         case 2:
            product2  += quantity_sold;
            quantity2 += 4.50 * quantity_sold;
            total += quantity2;
            break;

         case 3:
            product3 += quantity_sold;
            quantity3 += 9.98 * quantity_sold;
            total += quantity3;
            break;

         case 4:
            product4 += quantity_sold;
            quantity4 += 4.49 * quantity_sold;
            total += quantity4;
            break;

         case 5:
            product5 += quantity_sold;
            quantity5 += 6.87 * quantity_sold;
            total += quantity5;
            break;

         case '\n':
         case '\t':
         case ' ':
            break;

         default:
            std::cout << "Incorrect Entry\n";
            break;
      }
   }

   std::cout << "\n\nProduct\t\tQuantity\tQuantity Total\n"
             << "1\t\t" << product1 << "\t\t" << quantity1 << "\n"
             << "2\t\t" << product2 << "\t\t" << quantity2 << "\n"
             << "3\t\t" << product3 << "\t\t" << quantity3 << "\n"
             << "4\t\t" << product4 << "\t\t" << quantity4 << "\n"
             << "5\t\t" << product5 << "\t\t" << quantity5 << "\n"
             << "\t\t\t\t----------\n"
             << "\t\t\tTotal   " << total << std::endl;

   return 0;
}
