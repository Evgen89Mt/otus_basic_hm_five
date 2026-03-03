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

class Manager{
    public:
        Manager() = default;

        void loadFile(const std::string& file);
        void viewResult() const;
    private:
        Min m_min;
        // Max m_max;
        // Mean m_mean;
};
#endif