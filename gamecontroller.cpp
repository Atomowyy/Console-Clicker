//
// Created by atomowy on 17.03.2023.
//

#include "gamecontroller.h"


gamecontroller::gamecontroller(game_model& model) : model(model)  {
}

void gamecontroller::launch() {
    std::cout << "Console clicker!" << std::endl;
    int key;
    do
    {
        key = _getch();
        if(key==13) {

            this->model.add_points(1);
            this->update();
        }
    }
    while(key != 27);
}
//zadanie: przenieś update do gameview(nowa klasa)
void gamecontroller::update() {
    system("cls");
    std::cout << "Console clicker!" << std::endl;
    std::cout <<"Points: "<< model.get_points() << std::endl;
}

