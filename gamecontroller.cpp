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

            this->model.add_points(1);
            this->view.display(model.get_points());

        }
    } while (key != 27);
}
