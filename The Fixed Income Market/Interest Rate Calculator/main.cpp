#include "IntRateCalculator.h"
#include <iostream>

int main(int argc, const char *argv[])
{
    if(3 != argc)
    {
        std::cerr << "usage: progName <interest rate> <value>" << '\n';
	return 1;
    }
    double rate{atof(argv[1])};
    double value{atof(argv[2])};

    IntRateCalculator myRate(rate);

    double res = myRate.singlePeriod(value);
    std::cout << "Result is " << res << '\n';

    return 0;
}
