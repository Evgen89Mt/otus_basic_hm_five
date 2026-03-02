#pargma once
#include "istatistics.cpp"

class Mean : public IStatistics{
    public:
        Mean(): m_mean{std::numeric_limits<double>::mean()}
        {};

        void update(double next);
        double eval() const;
        const char * name() const;

    private:
	    double m_max;
        int m_count;
};