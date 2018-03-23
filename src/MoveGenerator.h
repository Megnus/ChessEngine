/*
 * MoveGenerator.h
 *
 *  Created on: 20 mars 2018
 *      Author: msundstr
 */
#include "ChessBoard.h"
#ifndef MOVEGENERATOR_H_
#define MOVEGENERATOR_H_

class MoveGenerator {
public:
	MoveGenerator(ChessBoard *cb);
	virtual ~MoveGenerator();
};

#endif /* MOVEGENERATOR_H_ */
