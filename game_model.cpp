//
// Created by atomowy on 17.03.2023.
//

#include "game_model.h"

int game_model::get_points() {
    return points;
}
int game_model::get_progress() {
    return progress;
}
int game_model::get_level() {
    return level;
}
int game_model::get_multiplier() {
    return multiplier;
}
void game_model::add_points(int p) {
    this->points += p;
}
void game_model::increase_level() {
    this->level +=1;
    this->multiplier=multiplier*2;
}
void game_model::increase_progress() {
    this->progress += 1;
}
void game_model::reset_progress() {
    this->progress = 0;
}




