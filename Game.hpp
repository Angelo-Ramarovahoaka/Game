#ifndef _GAME_HPP
#define _GAME_HPP
class Game
{
    public:
        virtual void acceuil()=0;
        virtual void play()=0;
        virtual void restart()=0;
        virtual void quit()=0;
        virtual void pause()=0;
};
#endif