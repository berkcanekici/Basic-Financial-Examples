#ifndef _COMPOUND_INT_RATE_CALC_
#define _COMPOUND_INT_RATE_CALC_

class CompoundIntRateCalculator {
public:
    explicit CompoundIntRateCalculator(double rate);
    CompoundIntRateCalculator(const CompoundIntRateCalculator &);
    CompoundIntRateCalculator &operator=(const CompoundIntRateCalculator&);
    ~CompoundIntRateCalculator();

    double multiplePeriod(double, int);
    double continuosCompounding(double, int);
private:
    double m_rate;
};




#endif