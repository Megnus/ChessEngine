/*
 * Knight.cpp
 *
 *  Created on: 14 mars 2018
 *      Author: msundstr
 */

#include "Knight.h"

Knight::Knight(uint8_t position):Piece(position) {

	// TODO Auto-generated constructor stub

}

Knight::~Knight() {
	// TODO Auto-generated destructor stub
}

void Knight::next(ChessBoard *cb) {
	cb->whiteBoardMatrix;
	//Move *move = new Move(0, 0, 0, Move::knight);
	cb->moveList.add(new Move(0, 0, 0, Piece::knight));
	//Faster if allready created
	cb->moveList.moveList[0].x = 0;
}

