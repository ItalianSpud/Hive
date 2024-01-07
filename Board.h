//
// Created by ryanj on 1/6/2024.
//

#ifndef HIVE_BOARD_H
#define HIVE_BOARD_H
#include "Piece.h"

class Board {
private:
    Piece** board;
    int size;
public:
    ~Board();
    Board(const Board& copied);
    const Board& operator=(const Board& rhs);
    Board(const Piece& initial);
    bool addPiece(const Piece& piece);
    bool addPiece(int x, int y);
    void removePiece(int x, int y, int height = 0);
};


#endif //HIVE_BOARD_H
