#include <iostream>
#include <iomanip>


void description() {
}

double F2C(double t) {
   return (t - 32) * (5.0/9.0);
}


double C2F(double t) {
   return t * (9.0/5.0) + 32;
}


void line() {
   for (int i = 0; i < 26; ++i) {
      std::cout << '-';
   }
   std::cout << std::endl;
}


void displayConversion(char type) {
   if (type == 'f') {
      line();
      std::cout << "| Fahrenheit  |"
         << std::setw( 11 ) << "Celsius |"
         << std::endl;
      line();

      for (int lower_bound = 32; lower_bound <= 212; lower_bound += 18) {
         std::cout << "| "
            << std::setw( 10 ) << lower_bound << "  |"
            << std::setw( 9 ) << F2C(lower_bound) << " |"
            << std::endl;
      }
      line();
   }
   else if (type == 'c') {
      line();
      std::cout << "| Celsius  |"
         << std::setw( 14 ) << "Fahrenheit |"
         << std::endl;
      line();

      for (int lower_bound = 0; lower_bound <= 100; lower_bound += 10) {
         std::cout << "| "
            << std::setw( 7 ) << lower_bound << "  |"
            << std::setw( 12 ) << C2F(lower_bound) << " |"
            << std::endl;
      }
      line();
   }

}


int main() {

   displayConversion('c');
   displayConversion('f');

   return 0;
}
