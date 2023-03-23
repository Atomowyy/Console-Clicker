//
// Created by atomowy on 17.03.2023.
//

#ifndef EXAMPLE_GAMECONTROLLER_H
#define EXAMPLE_GAMECONTROLLER_H

#include <iostream>
#include <conio.h>
#include "game_model.h"
#include "game_view.h"
class gamecontroller {

public:

    explicit gamecontroller(game_model& model, game_view& view);

    void launch();
    void lvl_up();

private:
    game_model& model;
    game_view& view;
};


#endif //EXAMPLE_GAMECONTROLLER_H
