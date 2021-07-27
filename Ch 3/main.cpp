#include <iostream>
#include "GradeBook.h"
#include "Account.h"
#include "Invoice.h"
#include "Employee.h"
#include "Date.h"
#include "HeartRates.h"

int main() {
    GradeBook gradeBook1("CS101 Introduction to Programming in C++", "Paul Deitel");
    GradeBook gradeBook2("CSC102 C++ Data Structures", "Henry Deitel");

    std::cout << "gradeBook1's initial course name is: " << gradeBook1.getCourseName()
              << "\ngradeBook2's initial course name is: " << gradeBook2.getCourseName() << std::endl;

    std::cout << "gradeBook1's instructor is: " << gradeBook1.getInstructorName()
              << "\ngradeBook2's instructor is: " << gradeBook2.getInstructorName() << std::endl;

    gradeBook1.setCourseName("CSC101 C++ Programming");
    std::cout << "\ngradeBook1's course name is: " << gradeBook1.getCourseName() << std::endl;


    Account account1(-50);
    Account account2(90);

    std::cout << "\n\naccount1 initial balance is: " << account1.getBalance()
              << "\naccount2 initial balance is: " << account2.getBalance() << std::endl;

    account1.credit(149);
    account2.debit(-90);
    account2.debit(100);
    account2.debit(50);

    std::cout << "\naccount1 balance is: " << account1.getBalance()
              << "\naccount2 balance is: " << account2.getBalance() << std::endl;


    Invoice invoice1("239874312", "3/4\" screw", 15, 1);
    Invoice invoice2("238947548", "1\" screw", 23, 2);

    std::cout << "\n\ninvoice1 part number: " << invoice1.getPartNumber()
              << "\n\tdescription: " << invoice1.getPartDescription()
              << "\n\tquantity: " << invoice1.getItemQuantity()
              << "\n\tprice: " << invoice1.getItemPrice()
              << "\n\tinvoice amount: " << invoice1.getInvoiceAmount() << std::endl;

    std::cout << "\ninvoice2 part number: " << invoice2.getPartNumber()
              << "\n\tdescription: " << invoice2.getPartDescription()
              << "\n\tquantity: " << invoice2.getItemQuantity()
              << "\n\tprice: " << invoice2.getItemPrice()
              << "\n\tinvoice amount: " << invoice2.getInvoiceAmount() << std::endl;



    return 0;
}
