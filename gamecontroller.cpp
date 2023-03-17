//
// Created by atomowy on 17.03.2023.
//

#include "gamecontroller.h"


gamecontroller::gamecontroller() {
    this->points=0;
}

void gamecontroller::launch() {
    std::cout << "Console clicker!" << std::endl;
    int key;
    do
    {
        key = _getch();
        if(key==13) {

            this->points ++;
            this->update();
        }
    }
    while(key != 27);
}

void gamecontroller::update() {
    system("cls");
    std::cout << "Console clicker!" << std::endl;
    std::cout <<"Points: "<< points << std::endl;
}

