#include "manager.hpp"

Manager::Manager(){}


void Manager::setNameFile(const std::string& file){
    if(file.empty()){
        std::cout << "[Manager::setNameFile]Error: string file is empty." << std::endl;
        return;
    }

    m_file = file;
}

void Manager::start(){
    if(m_file.empty()){
        std::cout << "[Manager::loadFile]Error: string file is empty." << std::endl;
        return;
    }

    if(!m_parsing.setFileName(m_file)){
        return;
    }

    m_values = m_parsing.getValuesDouble();
    for(const auto val : m_values){
        m_min.update(val);
        m_max.update(val);
        m_mean.update(val);
    }

    viewResult();
}

void Manager::viewResult() const{
    std::cout << "-----------------------------------" << std::endl;
    std::cout << m_min.name() <<" = "<< m_min.eval() << std::endl;
    std::cout << m_max.name() <<" = "<< m_max.eval() << std::endl;
    std::cout << m_mean.name() << " = " << m_mean.eval() << std::endl;
}
