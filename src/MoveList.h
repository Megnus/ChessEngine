/*
 * MoveList.h
 *
 *  Created on: 14 mars 2018
 *      Author: msundstr
 */

#include <iostream>
#include "Move.h"
#ifndef MOVELIST_H_
#define MOVELIST_H_

class MoveList {
public:
	void add(Move *m);
	MoveList();
	virtual ~MoveList();
	Move *moveList[4032];
	int index = 0;
};

#endif /* MOVELIST_H_ */
