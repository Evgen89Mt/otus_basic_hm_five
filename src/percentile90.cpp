#include "percentile90.hpp"

void Percentile90::update(double value){
    m_values.push_back(value);
}

double Percentile90::eval() const{
    if(m_values.empty()){
        return 0.0;
    }

    std::vector<double> sorted = m_values;

    std::sort(sorted.begin(), sorted.end());
    double index = (sorted.size() - 1) * 0.9;
    size_t lo = static_cast<size_t>(std::floor(index));
    size_t hi = static_cast<size_t>(std::ceil(index));

    if(lo == hi){
        return sorted[lo];
    }
    // линейная интерполяция между lo и hi
    double weight = index - lo;
    return sorted[lo] * (1.0 - weight) + sorted[hi] * weight;
}

const char* Percentile90::name() const{
    return "pct90";
}