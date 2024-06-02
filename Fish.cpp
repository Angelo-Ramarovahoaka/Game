#include"Fish.hpp"
#include<iostream>
using namespace std;

Fish::Fish()
{    
    this->player="Jean Do";
}
Fish::~Fish()
{
}
void Fish::acceuil()
{
    cout << "\n\n----------------------" << endl;
    cout << "FISH GAME" << endl;
    cout << "----------------------\n\n" << endl;
    cout << "write \"continue\" to continue or \"quit\" to quit\n";
    Fish::option();  
}
void Fish::option(){
    string option;
    cin >> option;
    while (true)
    {
        if (option=="continue")
        {
            Fish::play();
            break;
        }
        else if(option=="quit")
        {
            Fish::quit();
            break;
        }
        else
        {
            cout << "Mauvaise choix\n";
            cout << "write \"continue\" to continue or \"quit\" to quit\n";
            Fish::option();
            break;
        }   
    }
}
void Fish::play()
{
    cout << "\n\ngrow up our fry by food\n";
    cout << "write \"continue\" to continue default farmer or \"farmer\" to choise our farmer\n";
    string option;
    cin >> option;
     while (true)
    {
        if (option=="continue")
        {
            Fish::setFood();
            break;
        }
        else if(option=="farmer")
        {
            Fish::choisePlayer();
            break;
        }
        else
        {
            cout << "Mauvaise choix\n";
            cout << "write \"continue\" to continue or \"quit\" to quit\n";
            Fish::option();
            break;
        }   
    }
}
void Fish::choisePlayer()
{
    int gamer;
    cout << "\n\nhere you choise your farmer\n";
    cout << "press :\n";
    cout << "1: for Droso\n";
    cout << "2: for Ronaldo\n";
    cout << "3: for Mahazo\n";
    cin >> gamer;
    go=true;
    while (go!=false)
    {
        switch (gamer)
    {
    case 1:
        this->player= "Droso";
        Fish::start();
        break;
    case 2:
        this->player= "Ronaldo";
        Fish::start();
        break;
    case 3:
        this->player= "Mahazo";
        Fish::start();
        break;
    default:
        cout << "always  playing to get more than farmer ...\n";
        Fish::choisePlayer();
        break;
    }   
    }
}
void Fish::start()
{
    cout << player << " is or player\n";
    Fish::setFood();
}
void Fish::quit()
{
    cout << "\n\n----------------------" << endl;
    cout << "FISH GAME" << endl;
    cout << "----------------------\n\n" << endl;

    cout << "quit \n";
}
void Fish::restart(){
    cout << "\n\n----------------------" << endl;
    cout << "RESTART" << endl;
    cout << "----------------------\n\n" << endl;
    cout << "write \"continue\" to replay game or \"quit\" to quit\n";
    Fish::option();
}
void Fish::setFood()
{
    while (true)
    {
        int food,foodDevin;
         food=rand()%2;
        cout << player << " \n\nchoice 0 or 1 to get food \n";
        cin >> foodDevin;
        if(food==foodDevin)
        {
        cout <<"\n\nthinks, fish get food \n";
            score++;
            if(score==4){
            cout << "YOU WIN" << endl;
             cout << "you have : "<<score << "point " << endl;
                break;
            }
        }
        else
        {
            cout <<"\n\nsorry, fish get bombe \n";
            cout << "GAME OVER" << endl;
            cout << "\n\nyou have : "<<score << "point " << endl;
            Fish::restart();
            break;
        }
    }
    
    go=false;
}