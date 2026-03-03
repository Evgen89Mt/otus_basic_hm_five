#include "mean.hpp"

Mean::Mean()
: m_sum{0.0}
, m_count{0}
{}

void Mean::update(double next){
    m_sum += next;
    m_count++;
}
double Mean::eval() const{
    return (m_count > 0) ? (m_sum / m_count) : 0; 
}
const char * Mean::name() const{
    return "mean";
}