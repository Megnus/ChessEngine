/*
 * ChessBoard.h
 *
 *  Created on: 12 mars 2018
 *      Author: msundstr
 */

#include <iostream>

#include "Piece.h"
#include "MoveList.h"
#include "Move.h"
#ifndef CHESSBOARD_H_
#define CHESSBOARD_H_

class ChessBoard {
public:
	ChessBoard();
	virtual ~ChessBoard();
	void move(Piece piece);
	void next(Move *move);
	uint8_t nexta(Piece piece);
	void test(Piece *p);

	static const uint64_t queenSideEdge = 0b0;
	static const uint64_t kingSideEdge = 0b0;
	uint64_t whiteBoardMatrix = 0b0;
	uint64_t whitePawnMatrix = 0b0;
	uint64_t whiteKnightMatrix = 0b0;
	uint64_t whiteBishopMatrix = 0b0;
	uint64_t whiteRookMatrix = 0b0;
	uint64_t whiteQueenMatrix = 0b0;
	uint64_t whiteKingMatrix = 0b0;

	uint64_t blackBoardMatrix = 0b0;
	uint64_t blackPawnMatrix = 0b0;
	uint64_t blackKnightMatrix = 0b0;
	uint64_t blackBishopMatrix = 0b0;
	uint64_t blackRookMatrix = 0b0;
	uint64_t blackQueenMatrix = 0b0;
	uint64_t blackKingMatrix = 0b0;

	bool whiteCastle;
	bool blackCastle;

	MoveList moveList;

};

#endif /* CHESSBOARD_H_ */
