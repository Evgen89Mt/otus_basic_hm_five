#include "parsing.hpp"

bool Parsing::writeToFile(std::string& file, std::vector<std::string>& date){
    if(date.empty()){
        std::cout << "[Parsing::writeToFile] Error: container is empty." << std::endl;
        return false;
    }

    if(file.empty()){
        std::cout << "[Parsing::writeToFile] Error: string file is empty." << std::endl;
        return false;
    }

    std::fstream fout;
    fout.open(file, std::fstream::out | std::fstream::app);

    if(!fout.is_open()){
        std::cout << std::boolalpha << "[Parsing::writeToFile]Error: file is not open, status >> " << fout.is_open() << std::endl;
        return false;
    }

    for(const auto str : date){
        fout << str;
        fout << ' ';
    }

    return true;
}

bool Parsing::readFromFile(std::string& file, std::vector<std::string>& date){
    if(date.empty()){
        std::cout << "[Parsing::writeToFile] Error: container is empty." << std::endl;
        return false;
    }
        std::fstream fin;
    fin.open(file, std::fstream::in);

    if(!fin.is_open()){
        std::cout << std::boolalpha << "[Parsing::writeToFile]Error: file is not open, status >> " << fin.is_open() << std::endl;
        return false;
    }

    std::string line;

    for(;std::getline(fin, line);){
        date.push_back(line);
    }

    if(date.empty()){
        std::cout << "[Parsing::writeToFile] Error, container (vector) is empty." << std::endl;
        return false;
    }

    return true;
}