/*
 * piece.h
 *
 *  Created on: 9 mars 2018
 *      Author: msundstr
 */
#include <iostream>

//#include "ChessBoard.h"
#ifndef PIECE_H_
#define PIECE_H_

class Piece {
public:
	Piece(uint8_t position);
	virtual ~Piece();
	uint8_t next();
	uint8_t before();
	enum PieceType { knight, queen, none };
	uint64_t pieceMatrix;
	uint64_t moveMatrix;
	uint8_t index = 0;
	uint16_t score;
	const uint8_t size = 8;
	const int moves[8] = { -9, -8, -7, -1, 1, 7, 8, 9 };
	static const uint64_t queenSideEdge = 0b0;
	static const uint64_t kingSideEdge = 0b0;
	const uint64_t edgeMatrix[8] = {
			kingSideEdge,
			kingSideEdge,
			kingSideEdge,
			kingSideEdge,
			queenSideEdge,
			queenSideEdge,
			queenSideEdge,
			queenSideEdge };
 //private:
};

#endif /* PIECE_H_ */
