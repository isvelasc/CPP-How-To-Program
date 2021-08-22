#include <iostream>


void description() {
   std::cout << "This program calculates the minimum of three floating point numbers\n" << std::endl;
}


double minimum(double n1, double n2, double n3) {

   double min_val = n1;

   if (n2 < min_val)
      min_val = n2;
   if (n3 < min_val)
      min_val = n3;

   return min_val;

}


void displayMinumum(double n) {
   std::cout << "\nThe minimum is " << n << std::endl;
}


double input(int count) {
   double n;

   std::cout << "Enter number " << count << " > ";
   std::cin >> n;

   return n;
}


int main() {

   description();
   double n1 = input(1);
   double n2 = input(2);
   double n3 = input(3);

   displayMinumum(minimum(n1, n2, n3));

   return 0;
}
