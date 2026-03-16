#ifndef PERCENTILE90_HPP
#define PERCENTILE90_HPP

#include "istatistics.hpp"
#include <vector>
#include <cmath>
#include <algorithm>

class Percentile90 : public IStatistics{
public:
    void update(double value) override;
    double eval() const override;
    const char* name() const override;

private:
    std::vector<double> m_values;
};


#endif