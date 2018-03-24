/*
 * MoveGenerator.cpp
 *
 *  Created on: 20 mars 2018
 *      Author: msundstr
 */

#include "MoveGenerator.h"


MoveGenerator::MoveGenerator(ChessBoard *cb) {
	// TODO Auto-generated constructor stub
	Move list[1000];
	// 
	for (uint64_t focus = 0b1; focus > 0; focus <<= 1) {
		if (cb->whiteBoardMatrix & focus > 0) {
			if (cb->whitePawnMatrix & focus > 0)
				whitepawn(cb);
			else if (cb->whiteKnightMatrix & focus > 0)
				whiteknight(cb);
			else if (cb->whiteBishopMatrix & focus > 0)
				whitebishop(cb);
			else if (cb->whiteRookMatrix & focus > 0)
				whiterook(cb);
			else if (cb->whiteQueenMatrix & focus > 0)
				whitequeen(cb);
			else if (cb->whiteKingMatrix & focus > 0)
				whiteking(cb);
			// No white or black is neaded. cb holds the color.
			/*ChessBoard::whitePawnMatrix ^= move->moveMatrix;
			ChessBoard::whiteKnightMatrix ^= move->moveMatrix;
			ChessBoard::whiteBishopMatrix ^= move->moveMatrix;
			ChessBoard::whiteRookMatrix ^= move->moveMatrix;
			ChessBoard::whiteQueenMatrix ^= move->moveMatrix;
			ChessBoard::whiteKingMatrix ^= move->moveMatrix;*/
		}

	}

	cb->addMove(move)
			addMove(from, to, combo, sourcePiece, targetPiece)

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	uint64_t board = 0b11110000111100001111000011110000111100001111000011110000111100001;
	uint64_t wboard = 0b11110000111100001111000011110000111100001111000011110000111100001;
	uint64_t bboard = 0b11110000111100001111000011110000111100001111000011110000111100001;
	uint64_t knightBoard = 0b000000000001;


	uint8_t pointer = 1;
	focus = 1 << pointer;

	bool isPiece = board && focus > 0;
	bool isKnight = knightBoard && focus > 0;

	uint64_t validBoard = 2;
	uint64_t edge;
	uint64_t enemyPiceBoard;
	uint64_t valid = edge | enemyPiceBoard;

}

MoveGenerator::~MoveGenerator() {
	// TODO Auto-generated destructor stub
}

