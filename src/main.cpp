#include "manager.hpp"

int main(int argc, char* argv[]){

    Manager manager;
    manager.setNameFile("../statistics.txt");
    manager.start();

    return 0;
}