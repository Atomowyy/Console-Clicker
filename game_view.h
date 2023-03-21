//
// Created by woj-l on 21.03.2023.
//

#ifndef EXAMPLE_GAME_VIEW_H
#define EXAMPLE_GAME_VIEW_H
//#include "gamecontroller.h"

#include "game_model.h"
#include <iostream>


class game_view {
public:
    void display(int p);
private:
    game_model model;
};


#endif //EXAMPLE_GAME_VIEW_H
