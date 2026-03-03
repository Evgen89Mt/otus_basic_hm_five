
#include "max.hpp"


Max::Max()
    : m_max{std::numeric_limits<double>::max()}
    , m_flag(false)
{};

void Max::update(double next) {
    if(!m_flag){
        m_max = next;
        m_flag = true;
    }else if(next > m_max){
        m_max = next;
    }
}

double Max::eval() const {
    return m_flag ? m_max : 0.0;
}

const char * Max::name() const {
	return "max";
}
