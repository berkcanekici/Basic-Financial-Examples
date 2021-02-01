#include <iostream>
#include "CompoundIntRateCalculator.h"

int main(int argc, const char *argv[])
{
    if (4 != argc)
    {
        std::cerr << "Usage: progName <interest rate> <present value> <num periods>\n";
        return 1;
    }

    double rate{atof(argv[1])};
    double value{atof(argv[2])};
    int numPeriods{atoi(argv[3])};

    CompoundIntRateCalculator cIRCalc{rate};
    double result = cIRCalc.multiplePeriod(value, numPeriods);
    double continuousResult = cIRCalc.continuosCompounding(value, numPeriods);

    std::cout << "Future value for multiple period compounding is " << result << '\n';
    std::cout << "Future value for continuous compounding is " << continuousResult << '\n';

    return 0;
}