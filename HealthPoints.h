#ifndef EX3_HealthPoints_H
#define EX3_HealthPoints_H


#include <iostream>


#define DEFAULT_HEALTH 100


class HealthPoints
{
private:
    int m_health;
    int m_maxHealth;

public:
    HealthPoints();
    HealthPoints(const int n);

    HealthPoints(const HealthPoints& other) = default;
    ~HealthPoints() = default;
    HealthPoints& operator=(const HealthPoints& other) = default;

    HealthPoints operator+(const int n);
    friend HealthPoints operator+(const int x, const HealthPoints& y);
    
    HealthPoints operator-(const int n);
    
    void operator+=(const int n);
    void operator-=(const int n);
    
    bool operator==(const HealthPoints& other);
    bool operator==(const int n);
    friend bool operator==(const int x, const HealthPoints& y);

    bool operator!=(const HealthPoints& other);
    bool operator!=(const int n);
    friend bool operator!=(const int x, const HealthPoints& y);

    bool operator<=(const HealthPoints& other);
    bool operator<=(const int n);
    friend bool operator<=(const int x, const HealthPoints& y);

    bool operator>=(const HealthPoints& other);
    bool operator>=(const int n);
    friend bool operator>=(const int x, const HealthPoints& y);

    bool operator<(const HealthPoints& other);
    bool operator<(const int n);
    friend bool operator<(const int x, const HealthPoints& y);

    bool operator>(const HealthPoints& other);
    bool operator>(const int n);
    friend bool operator>(const int x, const HealthPoints& y);

    friend std::ostream& operator<<(std::ostream& os, const HealthPoints& healthPoints);

    class InvalidArgument {};
};

#endif //EX3_HealthPoints_H