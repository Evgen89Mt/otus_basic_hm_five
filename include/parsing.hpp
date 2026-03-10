#ifndef PARSING_HPP
#define PARSING_HPP

#include <iostream>
#include <fstream>

#include <string>
#include <vector>

class Parsing{
    private:
        std::string                 m_file;
        std::vector<std::string>    m_lines;
        std::vector<std::string>    m_words;        
    
    public:

        explisit Parsing(const std::string& file){
            if(file.empty()){
                std::cout << "[Parsing::Parsing] Error: string file is empty." << std::endl;
                return;
            }
            m_file = file;
        }

        bool write(const std::vector<std::string>& date);
        std::vector<std::string> getWords(const std::vector<std::string>& lines
        , char split_token);

        bool writeToFile(std::string& file, std::vector<std::string>& date);
        bool readFromFile(std::string& file, std::vector<std::string>& date);

        private:
            bool read();

};


#endif