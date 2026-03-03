#include "manager.hpp"

int main(int argc, char* argv[]){

    Manager manager;
    manager.loadFile("statistics.txt");
    manager.viewResult();

    return 0;
}