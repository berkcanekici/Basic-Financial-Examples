#include "CashFlowCalculator.h"
#include <cmath>
#include <iostream>

CashFlowCalculator::CashFlowCalculator(double rate)
    : m_rate(rate)
{
}
CashFlowCalculator::CashFlowCalculator(const CashFlowCalculator &other)
    : m_rate(other.m_rate)
{
}
CashFlowCalculator::~CashFlowCalculator()
{
}
CashFlowCalculator &CashFlowCalculator::operator=(const CashFlowCalculator &other)
{
    if (this != &other)
    {
        this->m_cashPayments = other.m_cashPayments;
        this->m_timePeriods = other.m_timePeriods;
        this->m_rate = other.m_rate;
    }
    return *this;
}
void CashFlowCalculator::addCashPayment(double value, int timePeriod)
{
    m_cashPayments.push_back(value);
    m_timePeriods.push_back(timePeriod);
}
double CashFlowCalculator::presentValue(double futureValue, int timePeriod)
{
    double presentValue = futureValue / pow(1+m_rate, timePeriod);
    std::cout << "value " << presentValue << '\n';
    return presentValue;
}
double CashFlowCalculator::presentValue()
{
    double total{};
    for(int i = 0; i < m_cashPayments.size(); ++i)
    {
        total += presentValue(m_cashPayments[i], m_timePeriods[i]);
    }
    return total;
}
