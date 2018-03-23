/*
 * ChessBoard.cpp
 *
 *  Created on: 12 mars 2018
 *      Author: msundstr
 */

#include "ChessBoard.h"
//#include <iostream>

ChessBoard::ChessBoard() {
	// TODO Auto-generated constructor stub

}

ChessBoard::~ChessBoard() {
	// TODO Auto-generated destructor stub
}

void ChessBoard::test(Piece *p) {
	p->index++;
	std::cout << std::to_string(1 + p->index) << std::endl;
}

void ChessBoard::next(Move *move) {
		if (ChessBoard::whiteBoardMatrix &= move->moveMatrix > 0) {
			ChessBoard::whiteBoardMatrix ^= move->moveMatrix;
			ChessBoard::whitePawnMatrix ^= move->moveMatrix;
			ChessBoard::whiteKnightMatrix ^= move->moveMatrix;
			ChessBoard::whiteBishopMatrix ^= move->moveMatrix;
			ChessBoard::whiteRookMatrix ^= move->moveMatrix;
			ChessBoard::whiteQueenMatrix ^= move->moveMatrix;
			ChessBoard::whiteKingMatrix ^= move->moveMatrix;
		}

		if (ChessBoard::blackBoardMatrix &= move->moveMatrix > 0) {
			ChessBoard::blackBoardMatrix ^= move->moveMatrix;
			ChessBoard::blackPawnMatrix ^= move->moveMatrix;
			ChessBoard::blackKnightMatrix ^= move->moveMatrix;
			ChessBoard::blackBishopMatrix ^= move->moveMatrix;
			ChessBoard::blackRookMatrix ^= move->moveMatrix;
			ChessBoard::blackQueenMatrix ^= move->moveMatrix;
			ChessBoard::blackKingMatrix ^= move->moveMatrix;
		}
}

uint8_t ChessBoard::nexta(Piece piece) {

	if (piece.index < piece.size) {
		// Piece pice = new Knight(&ChessBoard::whiteBoardMatrix, &ChessBoard::blackBoardMatrix);
		// uint64_t moveMatrix = pice.generateMoveMatrix(int square);

		// uint64_t moveMatrix;
		// Knight::whiteBoardMatrix = ChessBoard::whiteBoardMatrix, ChessBoard::blackBoardMatrix,
		// if (KnightMatrix & focusMatriz)
		// 		moveMatrix = Knight::generateMoveMatrix(uint_64 focusMatriz);

		//MoveGenerator -- ChessBoard
		//              |- Piece -- WhiteKnight
		//MoveGenerator::WhiteMove ...
		//MoveGenerator::BlackMove
		//ChessBoard::Move(uint64_t MoveMatrix)


		piece.moveMatrix <<= piece.moves[piece.index];
		//pieceMatrix ^= moveMatrix;

		if (((not (whiteBoardMatrix | piece.edgeMatrix[piece.index])) & piece.moveMatrix) > 0) {
			//*pieceMatrix ^= moveMatrix;next(Piece piece)
			if (blackBoardMatrix &= piece.moveMatrix > 0) {
				/*blackBoardMatrix ^= piece.moveMatrix;
				blackPawnMatrix ^= piece.moveMatrix;
				blackKnightMatrix ^= piece.moveMatrix;
				blackBishopMatrix ^= piece.moveMatrix;
				blackRookMatrix ^= piece.moveMatrix;
				blackQueenMatrix ^= piece.moveMatrix;
				blackKingMatrix ^= piece.moveMatrix;*/
				piece.index++;
			}

			whiteBoardMatrix ^= piece.moveMatrix;
			blackBoardMatrix ^= piece.moveMatrix;
			whitePawnMatrix ^= piece.moveMatrix;
			whiteKnightMatrix ^= piece.moveMatrix;
			whiteBishopMatrix ^= piece.moveMatrix;
			whiteRookMatrix ^= piece.moveMatrix;
			whiteQueenMatrix ^= piece.moveMatrix;
			whiteKingMatrix ^= piece.moveMatrix;

			//blackBoardMatrix &= not (moveMatrix);
			return 1;
		}
		piece.index++;
		return 0;
	}

	return -1;
}


void ChessBoard::move(Piece piece) {
	uint64_t focus = 0b1;
	uint8_t pointer = 1;
	focus = 1 << pointer;
	bool isPiece = whiteBoardMatrix && focus > 0;
	bool isKnight = whiteKnightMatrix && focus > 0;
	//piece::next();
}
