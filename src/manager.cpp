#include "manager.hpp"

Manager::Manager(){

}

void Manager::loadFile(const std::string& file){
    if(file.empty()){
        std::cout << "[Manager::loadFile]Error: string file is empty." << std::endl;
        return;
    }

    std::ifstream fin(file);

    if(!fin.is_open()){
        std::cout << std::boolalpha << "[Manager::loadFile]Error: file is not open." << std::endl;
        return;
    }

    //
    // тут нужен парсинг с проверкой
    //
    
    double temp;

    while(fin >> temp){
        m_min.update(temp);
        m_max.update(temp);
        m_mean.update(temp);
    }

    fin.close();
}

void Manager::viewResult() const{
    std::cout << "-----------------------------------" << std::endl;
    std::cout << m_min.name() <<" = "<< m_min.eval() << std::endl;
    std::cout << m_max.name() <<" = "<< m_max.eval() << std::endl;
    std::cout << m_mean.name() << " = " << m_mean.eval() << std::endl;
}