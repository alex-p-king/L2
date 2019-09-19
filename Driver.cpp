#include "Driver.h"

Driver::Driver(){
    int count = 0;
    std::ifstream infile;
    std::string word;
    infile.open("Data.txt");
    while(!infile.eof()){
        infile >> word;
        count++;
    }
    infile.close();
    std::cout << "adding " << count << " words to Hash table\n";
    m_table = new HashTable(count);
    infile.open("Data.txt");
    while(!infile.eof()){
        infile >> word;
        m_table->insert(word);
    }
    infile.close();
}

Driver::~Driver(){
    delete m_table;
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
    std::cout << "\n1: Insert\n" << "2: Delete\n" << "3: Find\n" << "4: Print\n" << "5: Exit\n\nPlease choose an option: "; 
}

void Driver::insert(){
    std::string word;
    std::cout << "Enter a word to be inserted: ";
    std::cin >> word;
    if(m_table->insert(word)){
        std::cout << "***SUCCESS***:: '" << word << "' inserted into hash table\n";
    }    
    else{
        std::cout << "***FAILURE***:: '" << word << "' not inserted into hash table\n";
    }
}

void Driver::deleteTable(){
    std::string word;
    std::cout <<"please enter a word to remove: ";
    std::cin >> word;
    if(m_table->remove(word)){
        std::cout << "***SUCCESS***:: '" << word << "' removed from hash table\n";
    }
    else{
        std::cout << "***FAILURE***:: '" << word << "' could not be removed from hash table\n";
    }
}

void Driver::find(){
    std::string word;
    std::cout << "Enter a word to search for: ";
    std::cin >> word;
    if(m_table->find(word)){
        int bucket = m_table->hash(word);
        std::cout << "***SUCCESS***:: found '" << word << "' in bucket " << bucket << std::endl;
    }
    else{
        std::cout << "***FAILURE***:: could not find '" << word << "'\n";
    }
}

void Driver::print(){
    m_table->print();
}

void Driver::test(){
    std::cout << "****You have entered Test mode****\n\n";
}

