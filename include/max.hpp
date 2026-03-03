#ifndef MAX_HPP
#define MAX_HPP

#include "istatistics.hpp"
#include <limits>

class Max : public IStatistics{
    public:
        Max();

        void update(double next) override;
        double eval() const override;
        const char * name() const override;

    private:
	    double m_max;
        bool   m_flag;
};

#endif