/*
 * piece.cpp
 *
 *  Created on: 9 mars 2018
 *      Author: msundstr
 */

#include "Piece.h"

Piece::Piece(uint8_t position) {
	index = 0;
	pieceMatrix = 0b01;
	pieceMatrix <<= position;
	//moveMatrix = (pieceMatrix << moves[index]) | pieceMatrix;
}

uint8_t Pawn::next() {
	if (blackBoardMatrix & (focus << 9) > 0 && cb->focus & edge == 0)
		cb->movelist++=focus << 9;
	if (blackBoardMatrix & (focus >> 7) > 0 && cb->focus & edge == 0)
		cb->movelist++=focus << 7;
	if (whiteBoardMatrix & (cb->focus >> 8) == 0 && blackBoardMatrix & (cb->focus >> 8) == 0)
		cb->movelist++=focus << 8;
	if ((cb->focus & 2ndrow > 0) && whiteBoardMatrix & (focus >> 16) == 0 && blackBoardMatrix & (focus >> 16) == 0)
		cb->movelist++=focus << 16;	
	return -1;
}

Piece::~Piece() {
	// TODO Auto-generated destructor stub
}

