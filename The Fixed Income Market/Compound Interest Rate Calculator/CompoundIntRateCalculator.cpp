#include "CompoundIntRateCalculator.h"
#include <cmath>

CompoundIntRateCalculator::CompoundIntRateCalculator(double rate)
: m_rate{rate}
{

}
CompoundIntRateCalculator::~CompoundIntRateCalculator()
{

}
CompoundIntRateCalculator::CompoundIntRateCalculator(const CompoundIntRateCalculator &other)
: m_rate{other.m_rate}
{

}
CompoundIntRateCalculator &CompoundIntRateCalculator::operator=(const CompoundIntRateCalculator &other)
{
    if(this != &other)
    {
        this->m_rate = other.m_rate;
    }
    return *this;
}
double CompoundIntRateCalculator::multiplePeriod(double value, int numPeriods)
{
    return (value * pow(1 + m_rate, numPeriods));
}
double CompoundIntRateCalculator::continuosCompounding(double value, int numPeriods)
{
    return (value * exp(m_rate * numPeriods));
}