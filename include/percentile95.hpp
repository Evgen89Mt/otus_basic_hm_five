#ifndef PERCENTILE95_HPP
#define PERCENTILE95_HPP

#include "istatistics.hpp"
#include <vector>
#include <cmath>
#include <algorithm>

class Percentile95 : public IStatistics{
public:
    void update(double value) override;
    double eval() const override;
    const char* name() const override;

private:
    std::vector<double> m_values;
};

#endif