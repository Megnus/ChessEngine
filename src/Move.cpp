/*
 * Move.cpp
 *
 *  Created on: 14 mars 2018
 *      Author: msundstr
 */

#include "Move.h"

Move::Move(int x, int y, uint64_t moveMatrix, Piece::PieceType pieceType) {
	// TODO Auto-generated constructor stub
	this->x = x;
	this->y = y;
	this->moveMatrix = 0;
	this->pieceType = pieceType;
}

Move::~Move() {
	// TODO Auto-generated destructor stub
}

