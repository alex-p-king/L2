#include "Driver.h"

Driver::Driver(){
    int count;
    std::ifstream infile;
    infile.open("data.txt");
    while(!infile.eof()){

    }
}

Driver::~Driver(){

}

void Driver::run(){
    bool quit = false;
    int uinput;
    while(quit == false){
        menu();
        std::cin >> uinput;
        std::cout << std::endl;
        switch (uinput) {
            case 1: insert();
                break;
            case 2: deleteTable();
                break;
            case 3: find();
                break;
            case 4: print();
                break;
            case 5: quit = true;
                break;
            case 0: test();
                break;
            default: quit = true;
                break;
        }   
    }
}

void Driver::menu(){
    std::cout << "1: Insert\n" << "2: Delete\n" << "3: Find\n" << "4: Print\n" << "5: Exit\n\nPlease choose an option: "; 
}

bool Driver::insert(){
    std::cout << "You chose: insert method \n\n";
    return false;
}

bool Driver::deleteTable(){
    std::cout << "You chose: delete method \n\n";
    return true;
}

std::string Driver::find(){
    std::cout << "You chose: find method \n\n";
    std::string s;
    return s;
}

void Driver::print(){
    std::cout << "You chose: Print table method \n\n";
}

void Driver::test(){
    std::cout << "****You have entered Test mode****\n\n";
}

