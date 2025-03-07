#ifndef __QUADRIS_GAME_H__
#define __QUADRIS_GAME_H__

#include "Board.h"
#include "CommandTrie.h"
#include "Level.h"
#include "Block.h"

class QuadrisGame {
    private:
        Board * board;
        CommandTrie * command_interpreter;
        Level * level;

        int high_score;
        int score;

        // Command Functions
        void rightRotate();
        void leftRotate();
        void moveLeft();
        void moveRight();
        void moveDown();
        void drop();
        void levelUp();
        void levelDown();
        void reset();
        // -------------------------

        void initialize();
        void lineCleared( int );
        void blockCleared( int );
        void processInput();
        void draw();
    public:
        QuadrisGame();
        ~QuadrisGame();
        void runGameLoop();
};

#endif
