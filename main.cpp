#include <iostream>
#include "gamecontroller.h"
using namespace std;



int main() {
    game_view view;
    game_model model;
    gamecontroller controller(model, view);

    controller.launch();

    return 0;
}
