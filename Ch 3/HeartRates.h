#ifndef CH_3_HEARTRATES_H
#define CH_3_HEARTRATES_H

class HeartRates {
public:
    explicit HeartRates( std::string, std::string, int, int, int );
    void setFirstName( std::string );
    void setLastName( std::string );
    void setDayOfBirth( int, int, int );
    std::string getFirstName() const;
    std::string getLastName() const;
    void displayBirthDate() const;
    int getAge() const;
    int getMaximumHeartRate() const;
    int getTargetHeartRate() const;

private:
    std::string first;
    std::string last;
    int day;
    int month;
    int year;
    int currDay = 27;
    int currMonth = 7;
    int currYear = 2021;
    int heartRate = 220;
    float lowerTarget = 0.5;
    float upperTarget = 0.8;
};


#endif //CH_3_HEARTRATES_H
