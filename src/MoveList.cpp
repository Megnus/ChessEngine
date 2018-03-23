/*
 * MoveList.cpp
 *
 *  Created on: 14 mars 2018
 *      Author: msundstr
 */

#include "MoveList.h"

MoveList::MoveList() {

}

MoveList::~MoveList() {
	// TODO Auto-generated destructor stub
}

void MoveList::add(Move *m) {
	this->moveList[index++] = m;
}

