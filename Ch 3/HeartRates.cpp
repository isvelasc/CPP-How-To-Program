#include <iostream>
#include "HeartRates.h"

HeartRates::HeartRates(std::string firstName, std::string lastName, int month, int day, int year) {
    setFirstName(firstName);
    setLastName(lastName);
    setDayOfBirth(month, day, year);
}

void HeartRates::setFirstName(std::string firstName) {
    first = firstName;
}

void HeartRates::setLastName(std::string lastName) {
    last = lastName;
}

void HeartRates::setDayOfBirth(int m, int d, int y) {
    if (d < 1)
        day = 1;
    else if (d > 31)
        day = d % 31;
    else
        day = d;

    if (m < 1)
        month = 1;
    else if (month > 12)
        month = m % 12;
    else
        month = m;

    if (y < 1)
        year = 1;
    else if (y > currYear)
        year = currYear;
    else
        year = y;
}

std::string HeartRates::getFirstName() const {
    return first;
}

std::string HeartRates::getLastName() const {
    return last;
}

void HeartRates::displayBirthDate() const {
    std::cout << month << " / " << day << " / " << year << std::endl;
}

int HeartRates::getAge() const {
    if (currMonth > month || currMonth == month && currDay >= day)
        return currYear - year;
    else
        return currYear - year - 1;
}

int HeartRates::getMaximumHeartRate() const {
    return heartRate - getAge();
}

int HeartRates::getTargetHeartRate() const {
    return (lowerTarget + upperTarget) / 2 * getMaximumHeartRate();
}
