#ifndef _INTEREST_RATE_CALCULATOR_
#define _INTEREST_RATE_CALCULATOR_

#include <iostream>

class IntRateCalculator {
public:
    explicit IntRateCalculator(double); 
    IntRateCalculator(const IntRateCalculator &);
    IntRateCalculator &operator=(const IntRateCalculator &);
    ~IntRateCalculator();
    double singlePeriod(double);
private:
    double m_rate;
};

inline double IntRateCalculator::singlePeriod(double value)
{
    return (value * (1 + this->m_rate));
}

#endif



