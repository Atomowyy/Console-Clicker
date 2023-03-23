//
// Created by woj-l on 21.03.2023.
//

#include "game_view.h"


void game_view::display(int p, int lvl, int progress, int ppc) {
    system("cls");
    std::cout<<"Clicked!"<<std::endl;
    std::cout<<"Current points: "<<p<<std::endl;
    std::cout<<"Points per click: "<<ppc<<std::endl;
    std::cout<<"Current level: "<<lvl<<std::endl;
    for(int i=0;i<progress;i++)
    {
        std::cout<<"|";
    }

}
