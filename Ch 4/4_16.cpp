#include <iostream>

int main() {

   unsigned int n = 1;

   std::cout << "N\t10*N\t100*N\t1000*N\n" << std::endl;

   while (n <= 5) {
      std::cout << n << "\t" << n*10 << "\t" << 100*n << "\t" << 1000*n << "\n";
      n++;
   }

   return 0;
}
