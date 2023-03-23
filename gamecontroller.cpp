//
// Created by atomowy on 17.03.2023.
//

#include "gamecontroller.h"


gamecontroller::gamecontroller(game_model& model, game_view& view) : model(model), view(view)  {
}

void gamecontroller::launch() {
    std::cout << "Console clicker!" << std::endl;
    int key;
    do {
        key = _getch();
        if (key == 13) {
            if(model.get_progress()==10)
            {
                lvl_up();
            }
            this->model.add_points(1*model.get_multiplier());
            this->model.increase_progress();
            this->view.display(model.get_points(), model.get_level(), model.get_progress(), model.get_multiplier());

        }
    } while (key != 27);
}

void gamecontroller::lvl_up() {
    model.reset_progress();
    model.increase_level();
}
