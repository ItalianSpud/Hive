//
// Created by ryanj on 1/5/2024.
//

#ifndef HIVE_PIECE_H
#define HIVE_PIECE_H
#include <bitset>
#include <string>

using std::bitset;
using std::string;


class Piece {
protected:
    int posX;
    int posY;
    bitset<6> surround;
public:
    Piece(int x, int y);
    const Piece& operator=(const Piece& rhs);
    virtual bool move(int hexX, int hexY) = 0;
    void updateSurround(string surroundSet);
    int getPosX() const;
    int getPosY() const;
};

#endif //HIVE_PIECE_H
