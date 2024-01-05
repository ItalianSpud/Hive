//
// Created by ryanj on 1/5/2024.
//

#ifndef HIVE_PIECE_H
#define HIVE_PIECE_H
#include <bitset>

using std::bitset;


class Piece {
protected:
    int posX;
    int posY;
    bitset<6> surround;
public:
    Piece(int x, int y, bitset<6> surround);
    virtual bool move(int hexX, int hexY) = 0;

};


#endif //HIVE_PIECE_H
