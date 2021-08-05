#ifndef CH_3_GRADEBOOK_H
#define CH_3_GRADEBOOK_H

class GradeBook
{
public:
    explicit GradeBook( std::string, std::string );
    void setCourseName( std::string );
    std::string getCourseName() const;
    void displayMessage() const;
    void inputGrades();
    void displayGradeReport() const;
    void displayGradePointAverage() const;

private:
    std::string courseName;
    unsigned int aCount;
    unsigned int bCount;
    unsigned int cCount;
    unsigned int dCount;
    unsigned int fCount;
};

#endif //CH_3_GRADEBOOK_H
