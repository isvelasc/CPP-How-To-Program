#include <iostream>
#include "GradeBook.h"

GradeBook::GradeBook(std::string course)
   :  aCount( 0 ),
      bCount( 0 ),
      cCount( 0 ),
      dCount( 0 ),
      fCount( 0 )
{
    setCourseName( course );
}

void GradeBook::setCourseName(std::string course) {
    if (course.size() <= 25)
        courseName = course;
    if (course.size() > 25) {
        courseName = course.substr(0,25);
        std::cerr << "Name \"" << course << "\" exceeds maximum length (25).\n" << "Limiting course name to first 25 characters.\n" << std::endl;
    }
}

std::string GradeBook::getCourseName() const {
    return courseName;
}

void GradeBook::displayMessage() const {
    std::cout << "Welcome to the grade book for\n" << getCourseName() << "\nby " << getInstructorName() << std::endl;
}

void GradeBook::inputGrades() {

   int grade;

   std::cout << "Enter the later grades." << std::endl
      << "Enter the EOF character to end input." << std::endl;

   while ((grade = std::cin.get()) != EOF) {

      switch (grade)
      {
         case 'A':
         case 'a':
            ++aCount;
            break;

         case 'B':
         case 'b':
            ++bCount;
            break;

         case 'C':
         case 'c':
            ++cCount;
            break;

         case 'D':
         case 'd':
            ++dCount;
            break;

         case 'F':
         case 'f':
            ++fCount;
            break;

         case '\n':
         case '\t':
         case ' ':
            break;

         default:
            std::cout << "Incorrect letter grade entered."
               << " Enter a new grade." << std::endl;
      }
   }
}

void GradeBook::displayGradeReport() const {

   std::cout << "\n\nNumber of students who received each letter grade:"
            << "\nA " << aCount
            << "\nB " << bCount
            << "\nC " << cCount
            << "\nD " << dCount
            << "\nF " << fCount
            << std::endl;
}

void GradeBook::displayGradePointAverage() const {

   int total = aCount + bCount + cCount + dCount + fCount;
   double gpa = (aCount * 4 + bCount * 3 + cCount * 2 dCount * 1) / total;

   std::cout << "\n\nThe class GPA is " << gpa << std::endl;
}
