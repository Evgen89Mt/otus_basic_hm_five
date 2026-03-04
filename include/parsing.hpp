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
        // std::vector<std::string>    m_words;        //
    
    public:

        bool writeToFile(std::string& file, std::vector<std::string>& date);
        bool readFromFile(std::string& file, std::vector<std::string>& date);

};


#endif