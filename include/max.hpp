#ifndef MAX_HPP
#include MAX_HPP

#include "istatistics.cpp"

class Max : public IStatistics{
    public:
        Max(): m_max{std::numeric_limits<double>::max()}
        {};

        void update(double next) override;
        double eval() const override;
        const char * name() const override;

    private:
	    double m_max;
};

#endif