#include "IntRateCalculator.h"

IntRateCalculator::IntRateCalculator(double rate)
: m_rate(rate) 
{

}
IntRateCalculator::~IntRateCalculator()
{

}
IntRateCalculator::IntRateCalculator(const IntRateCalculator& other)
: m_rate(other.m_rate)
{

}
IntRateCalculator& IntRateCalculator::operator=(const IntRateCalculator &other)
{
    if(&other != this)
    {
        this->m_rate = other.m_rate;
    }
    return *this;
}