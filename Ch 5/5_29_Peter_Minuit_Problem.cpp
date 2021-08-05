#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>


// stolen from
// https://stackoverflow.com/questions/7276826/c-format-number-with-commas
class comma_numpunct : public std::numpunct<char>
{
  protected:
    virtual char do_thousands_sep() const
    {
        return ',';
    }

    virtual std::string do_grouping() const
    {
        return "\03";
    }
};

int main() {

   double amount;
   double principal = 24.00;

   std::cout << "Year" << std::setw( 31 ) << "Amount on deposit" << std::endl;

   std::locale comma_locale(std::locale(), new comma_numpunct());
   std::cout.imbue(comma_locale);
   std::cout << std::fixed << std::setprecision( 2 );

   for (unsigned int rate = 5; rate <= 10; ++rate){
      for (unsigned int year = 1; year <= 395; ++year){

         amount = principal * pow(1.0 + static_cast<double>(rate) / 100, year);
         std::cout << std::setw( 4 ) << year << std::setw( 31 ) << amount << std::endl;
      }
   }

   return 0;
}
