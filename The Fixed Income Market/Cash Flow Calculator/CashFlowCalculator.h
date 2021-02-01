#ifndef _CASH_FLOW_CALCULATOR_
#define _CASH_FLOW_CALCULATOR_

#include <vector>

class CashFlowCalculator {
public:
    CashFlowCalculator(double);
    CashFlowCalculator(const CashFlowCalculator &);
    CashFlowCalculator &operator=(const CashFlowCalculator &);
    ~CashFlowCalculator();

    void addCashPayment(double, int);
    double presentValue();
private:
    std::vector<double> m_cashPayments;
    std::vector<int> m_timePeriods;
    double m_rate;
    double presentValue(double, int);
};

#endif
