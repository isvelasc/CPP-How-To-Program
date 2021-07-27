#include <iostream>
#include "Date.h"


Date::Date(int month, int day, int year) {
    setDay(day);
    setMonth(month);
    setYear(year);
}

void Date::setDay(int givenDay) {
    if (givenDay < 1)
        day = 1;
    else if (givenDay > 31)
        day = givenDay % 31;
    else
        day = givenDay;
}

void Date::setMonth(int givenMonth) {
    if (givenMonth < 1)
        month = 1;
    else if (givenMonth > 12)
        month = givenMonth % 12;
    else
        month = givenMonth;
}

void Date::setYear(int givenYear) {
    year = givenYear;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

void Date::displayDate() const {
    std::cout << getMonth() << " / " << getDay() <<  " / " << getYear() << std::endl;
}