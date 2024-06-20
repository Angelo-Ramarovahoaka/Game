#ifndef _FISH_HPP_
#define _FISH_HPP_
#include "Game.hpp"
#include <string>
using namespace std;
class Fish:public Game
{
    protected:
        bool go;
        int score=0;
        string player;
    public:
        Fish();
        ~Fish();
        void acceuil();
        void play();
        void restart();
        void quit();
        void choisePlayer();
        void start();
        void setFood();
        void option();
};
#endif