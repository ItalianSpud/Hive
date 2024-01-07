//
// Created by ryanj on 1/6/2024.
//

#include "Board.h"

Board::~Board() {

}

Board::Board(const Board &copied) {

}

const Board &Board::operator=(const Board &rhs) {
    return *this;
}

Board::Board(const Piece& initial) {
    size = 1;
    board = new Piece*[1];

}

bool Board::addPiece(const Piece &piece) {

}

bool Board::addPiece(int x, int y) {
    return false;
}

void Board::removePiece(int x, int y, int height) {

}