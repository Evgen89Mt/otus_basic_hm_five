#include "manager.hpp"
#include <chrono>

int main(int argc, char* argv[]){

    // auto startTime = std::chrono::system_clock::now();      
    Manager manager;
    // manager.setNameFile("../statistics.txt");
    manager.start();
    // auto endTime = std::chrono::system_clock::now();
    // auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(endTime- startTime);
    // std::cout << "project works milliseconds >> " << milliseconds.count() << " ms" << std::endl;

    return 0;
}