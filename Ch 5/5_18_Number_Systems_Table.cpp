#include <iostream>
#include <iomanip>
#include <cmath>


int main() {

   std::cout << "Dec" << std::setw( 12 ) << "Oct" << std::setw( 12 ) << "Hex" << std::setw( 12 ) << "Bin" << std::endl;
   for (int num = 1; num <= 256; ++num) {
      std::cout << std::setw( 3 ) << std::dec << num << std::setw( 12 ) << std::oct << num << std::setw( 12 ) << std::hex << num;

      /* Checks for how many bits have to be shifted
         to match binary number, (i.e. each bit shift
         is a power of 2, so 2^0 = 1 so 0 bit shifts,
         2^1 = 2 so 1 bit shift, 2^2 = 4 so 2 bit shifts, ...,
         2^n = n bit shifts)
         The final if statement prunes the excess bit shifts so that
         the output is exact number -- decimal 3 = 11 binary as opposed to 011,
         which is equivalent but not as pretty.
      */

      int bitshift = 0;
      int base2 = 1;
      int decimal_total = 1;
      while (decimal_total < num){
         decimal_total += base2;
         base2 *= 2;
         bitshift++;
      }
      if (num < decimal_total)
         bitshift--;

      std::cout << std::setw( 12 - bitshift );

      // largest to smallest output preserves correct binary representation
      for (int shift = bitshift; shift >= 0; --shift){
         int bnum = num >> shift;
         if (bnum & 1)
            std::cout << 1;
         else
            std::cout << 0;
      }

      std::cout << std::endl;
   }

   return 0;
}
