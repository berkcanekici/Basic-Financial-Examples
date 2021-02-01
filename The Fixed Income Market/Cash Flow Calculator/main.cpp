#include "CashFlowCalculator.h"
#include <iostream>

int main(int argc, const char * argv[])
{
    if(2 != argc)
    {
        std::cerr << "Usage: progName <interest rate>\n";
        return 1;
    }

    double rate{atof(argv[1])};

    CashFlowCalculator cfc{rate};
    do {
        int period;
        std::cin >> period;
        if(-1 == period)
        {
            break;
        }
        double value;
        std::cin >> value;
        cfc.addCashPayment(value, period);
    }while(1);

    double result = cfc.presentValue();
    std::cout << "The present value is " << result << '\n';
}