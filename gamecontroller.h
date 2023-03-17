//
// Created by atomowy on 17.03.2023.
//

#ifndef EXAMPLE_GAMECONTROLLER_H
#define EXAMPLE_GAMECONTROLLER_H

#include <iostream>
#include <conio.h>
#include "game_model.h"

class gamecontroller {

public:

    explicit gamecontroller(game_model& model);
    void launch();
    void update();

private:
    game_model& model;
};


#endif //EXAMPLE_GAMECONTROLLER_H
