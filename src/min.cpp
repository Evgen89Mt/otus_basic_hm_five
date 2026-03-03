#include "min.hpp"

Min::Min()
    : m_min{std::numeric_limits<double>::min()}
    , m_flag(false)
{};

void Min::update(double next) {
	// if (next < m_min) {
	// 	m_min = next;
	// }
    if(!m_flag){
        m_min = next;
        m_flag = true;
    }else if(next < m_min){
        m_min = next;
    }
}

double Min::eval() const {
	// return m_min;
    return m_flag ? m_min : 0.0;
}

const char * Min::name() const {
	return "min";
}
