/*
 * Knight.h
 *
 *  Created on: 14 mars 2018
 *      Author: msundstr
 */
#include "ChessBoard.h"
#include "Piece.h"
#include "Move.h"
#ifndef KNIGHT_H_
#define KNIGHT_H_

class Knight: public Piece {
public:
	Knight(uint8_t position);
	virtual ~Knight();
	void next(ChessBoard *cb);
};

#endif /* KNIGHT_H_ */
