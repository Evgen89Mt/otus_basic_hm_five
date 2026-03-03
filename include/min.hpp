#ifndef MIN_HPP
#define MIN_HPP

#include "istatistics.hpp"
#include <limits>

class Min : public IStatistics{
    public:
        Min()
        : m_min{std::numeric_limits<double>::min()}
        , m_flag(false)
        {};

        void update(double next) override;
        double eval() const override;
        const char * name() const override;

    private:
	    double m_min;
        bool m_flag;
};

#endif 