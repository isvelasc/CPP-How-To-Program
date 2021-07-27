#include <iostream>
#include "HealthProfile.h"

HealthProfile::HealthProfile(std::string firstName, std::string lastName, std::string g, int m, int d, int y, int h, int w) {
    setFirstName(firstName);
    setLastName(lastName);
    setGender(g);
    setDayOfBirth(m, d, y);
    setHeight(h);
    setWeight(w);
}

void HealthProfile::setFirstName(std::string firstName) {
    first = firstName;
}

void HealthProfile::setLastName(std::string lastName) {
    last = lastName;
}

void HealthProfile::setDayOfBirth(int m, int d, int y) {
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

void HealthProfile::setGender(std::string gen) {
    gender = gen;
}

void HealthProfile::setWeight(int currWeight) {
    if (currWeight < 1)
        weight = 1;
    else
        weight = currWeight;
}

void HealthProfile::setHeight(int currHeight) {
    if (currHeight < 0)
        height = 0;
    else
        height = currHeight;
}

std::string HealthProfile::getFirstName() const {
    return first;
}

std::string HealthProfile::getLastName() const {
    return last;
}

std::string HealthProfile::getGender() const {
    return gender;
}

void HealthProfile::displayBirthDate() const {
    std::cout << month << " / " << day << " / " << year << std::endl;
}

float HealthProfile::getBMI() const {
    return (weight * 703) / (height * height);
}

int HealthProfile::getHeight() const {
    return height;
}

int HealthProfile::getWeight() const {
    return weight;
}

int HealthProfile::getAge() const {
    if (currMonth > month || currMonth == month && currDay >= day)
        return currYear - year;
    else
        return currYear - year - 1;
}

int HealthProfile::getMaximumHeartRate() const {
    return heartRate - getAge();
}

int HealthProfile::getTargetHeartRate() const {
    return (lowerTarget + upperTarget) / 2 * getMaximumHeartRate();
}