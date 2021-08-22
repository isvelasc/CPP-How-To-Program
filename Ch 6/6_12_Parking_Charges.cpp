#include <iostream>
#include <iomanip>
#include <cmath>

double parkedHours() {
   double hours = 0;
   while (hours <= 0) {
      std::cout << "Enter customer parking hours > ";
      std::cin >> hours;
   }
   return hours;
}

double calculateCharges(double hours) {

   if (hours <= 2)
      return 2;
   else if (hours < 19)
      return 2 + (hours - 3) * 0.5;
   else
      return 10;
}

void displayParking(std::string out, double hours, double charge) {
   if (out == "TOTAL")
      std::cout << out << std::setw( 8 ) << std::fixed << std::setprecision(1) << hours << std::setw( 10 ) << std::fixed << std::setprecision(2) << charge << std::endl;
   else
      std::cout << out << std::setw( 12 ) << std::fixed << std::setprecision(1) << hours << std::setw( 10 ) << std::fixed << std::setprecision(2) << charge << std::endl;
}

int main() {

   double hours1 = parkedHours();
   double hours2 = parkedHours();
   double hours3 = parkedHours();
   double total_hours = hours1 + hours2 + hours3;

   double charge1 = calculateCharges(hours1);
   double charge2 = calculateCharges(hours2);
   double charge3 = calculateCharges(hours3);
   double total_charge = charge1 + charge2 + charge3;

   std::cout << "Car" << std::setw( 10 ) << "Hours" << std::setw( 10 ) << "Charge" << std::endl;
   displayParking("1", hours1, charge1);
   displayParking("2", hours2, charge2);
   displayParking("3", hours3, charge3);
   displayParking("TOTAL", total_hours, total_charge);

   return 0;
}
