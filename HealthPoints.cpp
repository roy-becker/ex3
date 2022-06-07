#include "HealthPoints.h"


HealthPoints::HealthPoints()
{
    m_health = DEFAULT_HEALTH;
    m_maxHealth = DEFAULT_HEALTH;
}

HealthPoints::HealthPoints(int n)
{
    if (n > 0)
    {
        m_health = n;
        m_maxHealth = n;
    }
    else
    {
        throw HealthPoints::InvalidArgument();
    }
}

HealthPoints& HealthPoints::operator+(const int n)
{
    HealthPoints* result 
    *result = new HealthPoints(*this);
    *result += n;
    return result;
}

HealthPoints& operator+(const int x, const HealthPoints& y)
{
    return y + x;
}

HealthPoints& HealthPoints::operator-(const int n)
{
    HealthPoints* result 
    *result = new HealthPoints(*this);
    *result -= n;
    return result;
}

void HealthPoints::operator+=(const int n)
{
    this->m_health += n;
    if (this->m_health < 0)
    {
        this->m_health = 0;
    }
    else if (this->m_health > this->m_maxHealth)
    {
        this->m_health = this->m_maxHealth;
    }
}

void HealthPoints::operator-=(const int n)
{
    this->m_health -= n;
    if (this->m_health < 0)
    {
        this->m_health = 0;
    }
    else if (this->m_health > this->m_maxHealth)
    {
        this->m_health = this->m_maxHealth;
    }
}

bool HealthPoints::operator==(const HealthPoints& other)
{
    return this->m_health == other.m_health;
}

bool HealthPoints::operator==(const int n)
{
    return this->m_health == n;
}

bool operator==(const int x, const HealthPoints& y)
{
    return x == y.m_health;
}

bool HealthPoints::operator!=(const HealthPoints& other)
{
    return this->m_health != other.m_health;
}

bool HealthPoints::operator!=(const int n)
{
    return this->m_health != n;
}

bool operator!=(const int x, const HealthPoints& y)
{
    return x != y.m_health;
}

bool HealthPoints::operator<=(const HealthPoints& other)
{
    return this->m_health <= other.m_health;
}

bool HealthPoints::operator<=(const int n)
{
    return this->m_health <= n;
}

bool operator<=(const int x, const HealthPoints& y)
{
    return x <= y.m_health;
}

bool HealthPoints::operator>=(const HealthPoints& other)
{
    return this->m_health >= other.m_health;
}

bool HealthPoints::operator>=(const int n)
{
    return this->m_health >= n;
}

bool operator>=(const int x, const HealthPoints& y)
{
    return x >= y.m_health;
}

bool HealthPoints::operator<(const HealthPoints& other)
{
    return this->m_health < other.m_health;
}

bool HealthPoints::operator<(const int n)
{
    return this->m_health < n;
}

bool operator<(const int x, const HealthPoints& y)
{
    return x < y.m_health;
}

bool HealthPoints::operator>(const HealthPoints& other)
{
    return this->m_health > other.m_health;
}

bool HealthPoints::operator>(const int n)
{
    return this->m_health > n;
}

bool operator>(const int x, const HealthPoints& y)
{
    return x > y.m_health;
}

std::ostream& HealthPoints::operator<<(std::ostream& os, const HealthPoints& healthPoints)
{
    os << healthPoints.m_health << "(" << healthPoints.m_maxHealth << ")";
    return os;
}
