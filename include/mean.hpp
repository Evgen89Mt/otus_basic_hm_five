#ifndef MEAN_HPP
#include MEAN_HPP

#include "istatistics.cpp"

class Mean : public IStatistics{
    public:
        Mean(): m_mean{std::numeric_limits<double>::mean()}
        {};

        void update(double next) override;
        double eval() const override;
        const char * name() const override;

    private:
	    double m_max;
        int m_count;
};

#endif