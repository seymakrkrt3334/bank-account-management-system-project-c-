#include "Utilities.h"
#include <iomanip>
#include <sstream>

std::string Utilities::formatCurrency(double amount) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << amount;
    return "$" + oss.str();
}

