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

uint8_t Piece::next() {
	/*if (index < size) {
		moveMatrix <<= moves[index];
		pieceMatrix ^= moveMatrix;
		if ((not (ChessBoard::whiteBoardMatrix | edgeMatrix[index]) & moveMatrix) > 0) {
			*pieceMatrix ^= moveMatrix;
			whiteBoardMatrix ^= moveMatrix;
			ChessBoard::whiteBoardMatrix ^= moveMatrix;
			ChessBoard::whitePawnMatrix ^= moveMatrix;
			ChessBoard::whiteKnightMatrix ^= moveMatrix;
			ChessBoard::whiteBishopMatrix ^= moveMatrix;
			ChessBoard::whiteRookMatrix ^= moveMatrix;
			ChessBoard::whiteQueenMatrix ^= moveMatrix;piece.
			ChessBoard::whiteKingMatrix ^= moveMatrix;

			if (ChessBoard::blackBoardMatrix &= moveMatrix > 0) {
				ChessBoard::blackBoardMatrix ^= moveMatrix;
				ChessBoard::blackPawnMatrix ^= moveMatrix;
				ChessBoard::blackKnightMatrix ^= moveMatrix;
				ChessBoard::blackBishopMatrix ^= moveMatrix;
				ChessBoard::blackRookMatrix ^= moveMatrix;
				ChessBoard::blackQueenMatrix ^= moveMatrix;
				ChessBoard::blackKingMatrix ^= moveMatrix;
				index++;
			}
			//ChessBoard::blackBoardMatrix &= not (moveMatrix);
			return 1;
		}
		index++;
		return 0;
	}*/
	return -1;
}

Piece::~Piece() {
	// TODO Auto-generated destructor stub
}

