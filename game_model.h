//
// Created by atomowy on 17.03.2023.
//

#ifndef EXAMPLE_GAME_MODEL_H
#define EXAMPLE_GAME_MODEL_H
//#include "game_view.h"

class game_model {

public:
    int get_points();
    int get_level();
    int get_progress();
    int get_multiplier();
    void add_points(int p);
    void increase_level();
    void reset_progress();
    void increase_progress();

private:
    int points = 0;
    int level = 0;
    int progress = 0;
    int multiplier = 1;

};


#endif //EXAMPLE_GAME_MODEL_H
