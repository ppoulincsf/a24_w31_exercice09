#include "pch.h"
#include "game.h"
int main()
{
    Game aGame;
    aGame.init("Launcher", 1024, 768);
    aGame.run();
}
