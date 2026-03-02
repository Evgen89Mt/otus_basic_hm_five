#include "min.hpp"

void Min::update(double next) override {
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

double Min::eval() const override {
	// return m_min;
    return m_flag ? m_min : 0.0;
}

const char * Min::name() const override {
	return "min";
}
