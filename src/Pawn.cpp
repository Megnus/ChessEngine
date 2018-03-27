/*
 * piece.cpp
 *
 *  Created on: 9 mars 2018
 *      Author: msundstr
 */

#include "Piece.h"

Pawn::Pawn(uint8_t position) {
	index = 0;
	pieceMatrix = 0b01;
	pieceMatrix <<= position;
	//moveMatrix = (pieceMatrix << moves[index]) | pieceMatrix;

}

uint8_t Pawn::next(ChessBoard *cb) {
	if (blackBoardMatrix & (focus << 9) > 0 && cb->focus & queensideedge == 0)
		cb->movelist++=focus << 9 | focus;
	if (blackBoardMatrix & (focus >> 7) > 0 && cb->focus & kingsideedge == 0)
		cb->movelist++=focus << 7 | focus;
	if (whiteBoardMatrix & (cb->focus >> 8) == 0 && blackBoardMatrix & (cb->focus >> 8) == 0)
		cb->movelist++=focus << 8 | focus;
	if ((cb->focus & 2ndrow > 0) && whiteBoardMatrix & (focus >> 16) == 0 && blackBoardMatrix & (focus >> 16) == 0)
		cb->movelist++=focus << 16 | focus;
	return -1;
}

Piece::~Piece() {
	// TODO Auto-generated destructor stub
}

