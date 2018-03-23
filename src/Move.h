/*
 * Move.h
 *
 *  Created on: 14 mars 2018
 *      Author: msundstr
 */
#include <iostream>
#include "Piece.h"
#ifndef MOVE_H_
#define MOVE_H_

class Move {
public:
	Move(int x, int y, uint64_t moveMatrix, Piece::PieceType pieceType);
	virtual ~Move();
	int x;
	int y;
	uint64_t moveMatrix;
	Piece::PieceType pieceType;
};

#endif /* MOVE_H_ */
