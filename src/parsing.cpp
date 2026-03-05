#include "parsing.hpp"

bool Parsing::setFileName(const std::string& file){
    if(file.empty()){
        std::cout << "[Parsing::setFileName]Error: string is empty."<< std::endl;
        return;
    }
    m_file = file;

    return true;
}

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

std::vector<std::string> Parsing::readFileWords(){
    if(readFileLines()){
        std::cout << "[Parsing::readFileWords]Error: readFileLines" << std::endl;
        return std::vector<std::string>{""};
    }

    std::vector<std::string> temp_words;
    for(auto line: m_lines){
        temp_words = parsingLine(line);

        if(!temp_words.empty()){
            for(const auto word: temp_words){
                m_words.push_back(word);
            }
        }
        temp_words.clear();
    }
    

    if(m_words.empty()){
        std::cout << "[Parsing::readFileWords]Error: container m_words is empty." << std::endl;
        return std::vector<std::string> {};
    }
    
    return m_words;
}

bool Parsing::writeFile(const std::vector<std::string>& date){
    if(date.empty()){
        std::cout << "[Parsing::writeFile] Error: container is empty." << std::endl;
        return false;
    }

    std::fstream fout;
    fout.open(m_file, std::fstream::out | std::fstream::app);

    if(!fout.is_open()){
        std::cout << std::boolalpha << "[Parsing::writeFile]Error: file is not open, status >> " << fout.is_open() << std::endl;
        return false;
    }

    for(const auto str : date){
        fout << str;
        fout << ' ';
    }

    return true;
}

std::vector<std::string> Parsing::parsingLine(std::string& line, char split_token){

    std::vector<std::string> temp;

    for(auto it = line.begin(); it != line.end(); it++){

        std::string str_temp; 
        std::string::iterator j = it;

        for(; j != line.end() && *j != split_token; j++){
            str_temp +=*j;
        }

        it = j;

        if(!str_temp.empty()){
            temp.push_back(str_temp);
        }

        if(it == line.end()){
            break;
        }
    }
    return temp;
}

bool Parsing::readFileLines(){
    std::fstream fin;
    fin.open(m_file, std::fstream::in);

    if(!fin.is_open()){
        std::cout << std::boolalpha << "[Parsing::readFileLines]Error: file is not open, status >> " << fin.is_open() << std::endl;
        return false;
    }

    std::string line;

    for(;std::getline(fin, line);){
        m_lines.push_back(line);
    }

    if(m_lines.empty()){
        std::cout << "[Parsing::readFileLines] Error, container (vector) is empty." << std::endl;
        return false;
    }

    return true;
}