#ifndef STD_HPP
#define STD_HPP

#include "istatistics.hpp"
#include <cmath>
#include <cstddef>

class Std : public IStatistics{
public:
    Std();

    void update(double next) override;
    double eval() const override;
    const char * name() const override;

private:
    double m_sum;
    double m_sq_sum;
    size_t m_count;
};

#endif