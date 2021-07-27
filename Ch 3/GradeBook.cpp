#include <iostream>
#include "GradeBook.h"

GradeBook::GradeBook(std::string course, std::string instructor) {
    setCourseName( course );
    setInstructorName( instructor );
}

void GradeBook::setCourseName(std::string course) {
    if (course.size() <= 25)
        courseName = course;
    if (course.size() > 25) {
        courseName = course.substr(0,25);
        std::cerr << "Name \"" << course << "\" exceeds maximum length (25).\n" << "Limiting course name to first 25 characters.\n" << std::endl;
    }
}

void GradeBook::setInstructorName(std::string instructor) {
    courseInstructor = instructor;
}

std::string GradeBook::getCourseName() const {
    return courseName;
}

std::string GradeBook::getInstructorName() const {
    return courseInstructor;
}

void GradeBook::displayMessage() const {
    std::cout << "Welcome to the grade book for\n" << getCourseName() << "\nby " << getInstructorName() << std::endl;
}