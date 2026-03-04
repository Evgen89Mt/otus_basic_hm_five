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

#include "parsing.hpp"

class Manager{
    public:
        Manager();

        void loadFile(const std::string& file);
        void viewResult() const;

    private:
        Min m_min;
        Max m_max;
        Mean m_mean;

        Parsing m_parsing;
};
#endif