//
// Created by ryanj on 1/5/2024.
//

#include "Piece.h"

Piece::Piece(int x, int y) : posX(x), posY(y), surround(bitset<6>()) {}

int Piece::getPosY() const {return posY;}
int Piece::getPosX() const {return posX;}

void Piece::updateSurround(string surroundSet) {
    surround = bitset<6>(surroundSet);
}

const Piece& Piece::operator=(const Piece& rhs) {
    posX = rhs.posX;
    posY = rhs.posY;
    surround = rhs.surround;
    return *this;
}
