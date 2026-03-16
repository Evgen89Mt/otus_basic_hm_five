#include "std.hpp"

Std::Std()
    :m_count(0)
    ,m_sum(0.0)
    ,m_sq_sum(0.0){
}

void Std::update(double next){
    m_sum += next;
    m_sq_sum += next * next;
}

double Std::eval() const{
    if(m_count == 0){
        return 0.0;
    }

    double mean = m_sum / m_count;

    double variance = (m_sq_sum / m_count) - (mean * mean);

    return sqrt(variance);
}

const char * Std::name() const{
    return "std";
}