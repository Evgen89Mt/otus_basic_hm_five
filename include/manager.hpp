#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "istatistics.hpp"
#include "min.hpp"
#include "max.hpp"
#include "mean.hpp"
#include "std.hpp"
#include "percentile90.hpp"
#include "percentile95.hpp"

#include "parsing.hpp"

class Manager{
    public:
        Manager();
        void setNameFile(const std::string& file);
        void start();
        void viewResult() const;

    private:
        Min m_min;
        Max m_max;
        Mean m_mean;
        Std m_std;
        Percentile90 m_pct90;
        Percentile95 m_pct95;

        Parsing m_parsing;
        std::string m_file;
        std::vector<double> m_values;
};
#endif