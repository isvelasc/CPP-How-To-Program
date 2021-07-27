#ifndef CH_3_GRADEBOOK_H
#define CH_3_GRADEBOOK_H

class GradeBook
{
public:
    explicit GradeBook( std::string, std::string );
    void setCourseName( std::string );
    void setInstructorName( std::string );
    std::string getCourseName() const;
    std::string getInstructorName() const;
    void displayMessage() const;

private:
    std::string courseName;
    std::string courseInstructor;
};

#endif //CH_3_GRADEBOOK_H
