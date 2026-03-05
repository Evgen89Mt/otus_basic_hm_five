#include "manager.hpp"

int main(int argc, char* argv[]){

    Manager manager;
    manager.loadFile("../statistics.txt");      //Parsing TO DO
    manager.viewResult();

    return 0;
}