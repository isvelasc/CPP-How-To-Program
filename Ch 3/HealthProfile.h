#ifndef CH_3_HEALTHPROFILE_H
#define CH_3_HEALTHPROFILE_H

class HealthProfile {
public:
    explicit HealthProfile( std::string, std::string, std::string, int, int, int, int, int );
    void setFirstName( std::string );
    void setLastName( std::string );
    void setGender( std::string );
    void setDayOfBirth( int, int, int );
    void setHeight( int );
    void setWeight( int );
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getGender() const;
    void displayBirthDate() const;
    float getBMI() const;
    int getAge() const;
    int getHeight() const;
    int getWeight() const;
    int getMaximumHeartRate() const;
    int getTargetHeartRate() const;

private:
    std::string first;
    std::string last;
    std::string gender;
    int day;
    int month;
    int year;
    int height;
    int weight;
    int currDay = 27;
    int currMonth = 7;
    int currYear = 2021;
    int heartRate = 220;
    float lowerTarget = 0.5;
    float upperTarget = 0.8;

};


#endif //CH_3_HEALTHPROFILE_H
