#include <iostream>
#include "gamecontroller.h"
using namespace std;



int main() {
    game_model model;
    gamecontroller controller(model);

    controller.launch();

    return 0;
}
