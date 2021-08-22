#include <iostream>
#include <iomanip>
#include <cmath>


void description() {
   std::cout << "This program gives the greatest common divisor (GDC) of two integers\n" << std::endl;
}


int input() {

   int n;
   std::cout << "Enter integer > ";
   std::cin >> n;

   return n;
}


int GDC(int n1, int n2) {

   if (n1 == 0 || n2 == 0)
      return 0;

   n1 = fabs(n1);
   n2 = fabs(n2);

   int min;
   if (n1 < n2)
      min = n1;
   else
      min = n2;

   int gdc = 1;
   for (int i = 1; i <= min; ++i){
      if (n1 % i == 0 && n2 % i == 0)
         gdc = i;
   }

   return gdc;
}


void displayGDC(int gdc) {
   std::cout << "\n" << std::setw(6) << "GDC : " << gdc << std::endl;
}


int main() {

   description();

   int n1 = input();
   int n2 = input();
   displayGDC(GDC(n1, n2));

   return 0;
}
