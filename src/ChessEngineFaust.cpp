//============================================================================
// Name        : ChessEngineFaust.cpp
// Author      : Magnus
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
#include <memory>
#include <type_traits>
#include <iomanip>
#include <map>
#include <cassert>
#include "ChessBoard.h"
using namespace std;

void transa(ChessBoard ch) {
	ch.whiteBoardMatrix = 666;
	cout << ch.whiteBoardMatrix << endl;
}

int main() {
	Piece *p = new Piece(40);

	//ChessBoard::ChessBoard cs;
	ChessBoard cs;
	cs.whiteBoardMatrix = 997;
	transa(cs);
	cout << cs.whiteBoardMatrix << endl;
	cout << "cs.whiteBoardMatrix" << endl;
	cs.test(p);
	cs.test(p);
	cs.test(p);
	cs.test(p);
	cs.test(p);

	/*
	MoveList[depth] movelist =
	movelist[0] = new *MoveList;
	movelist[0].add(new Move());

	alphabeta(depth) {
		if (depth == 0)
			return evalutaion

		movelist[depth - 1] = generateMoves();
		movelist[depth - 1] = sort(movelist);

		while (movelist.next())//(move in movelist) {
			// move must contain pieceColorEnum, pieceHitEnum, moveFrom64, moveTo64
			move = movelist[depth - 1].get();
			chessboard.next(move);
			score = alphabeta(depth - 1);
			chessboard.previous(move);
		}
	}

	alphabeta(depth, chessboard, move) {
		if (move != null)
			chessboard.next(move)

		if (depth == 0)
			return evalutaion

		movelist = generateMoves(chessBoard);
		movelist = sort(movelist);

		for (move in movelist) {
			// move must contain pieceColorEnum, pieceHitEnum, moveFrom64, moveTo64
			score = alphabeta(depth - 1, chessBoard, move);
		}

		delete movelist;
		delete chessboard;
		return bestscore;
	}
	*/
/*

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	uint64_t board = 0b11110000111100001111000011110000111100001111000011110000111100001;
	uint64_t wboard = 0b11110000111100001111000011110000111100001111000011110000111100001;
	uint64_t bboard = 0b11110000111100001111000011110000111100001111000011110000111100001;
	uint64_t knightBoard = 0b000000000001;

	uint64_t focus = 0b1;
	uint8_t pointer = 1;
	focus = 1 << pointer;

	bool isPiece = board && focus > 0;
	bool isKnight = knightBoard && focus > 0;

	uint64_t validBoard = 2;
	uint64_t edge;
	uint64_t enemyPiceBoard;
	uint64_t valid = edge | enemyPiceBoard;

	uint64_t queen = 0b11111111;
	uint64_t rook = 0b01010101;
	uint64_t bishop = 0b01010101;
	uint8_t moves[8] = { -9, -8, -7, -1, 1, 7, 8, 9 };


	int rot = 0;
	int move* = pointer - moves[rot];
	//match dirction on valid board;

	uint64_t *pieceMatrix;
	uint64_t queenSideBoarder = 0b111;
	uint64_t kingSideBoarder = 0b111;
	uint64_t edgeMatrix[8] = { kingSideBoarder, kingSideBoarder, kingSideBoarder, kingSideBoarder,
			queenSideBoarder, queenSideBoarder, queenSideBoarder, queenSideBoarder };

	// Initial move matrix
	uint64_t moveMatrix = (*pieceMatrix << move[rot]) | *pieceMatrix;

	moveMatrix <<= move[rot];
	if ((not (wboard | edgeMatrix[rot]) & moveMatrix) > 0) {
		*pieceMatrix ^= moveMatrix;
		wboard ^= moveMatrix;
		bboard &= not(moveMatrix);
	}
	// Pieces should be in a hashmap  --> <square, piece>
	pointer++;*/
	return 0;
}



int hashing(int argc, char **argv)
{
  std::map<std::string, int> m;
  m["hello"] = 23;
  // check if key is present
  if (m.find("world") != m.end())
    std::cout << "map contains key world!\n";
  // retrieve
  std::cout << m["hello"] << '\n';
  std::map<std::string, int>::iterator i = m.find("hello");
  assert(i != m.end());
  std::cout << "Key: " << i->first << " Value: " << i->second << '\n';
  return 0;
}

void obosolete() {
/*
	x = old_pos % 8 - new_pos % 8
	x*x <= 1
	new_pos < 64 && new_pos > 0
	wboard & 0b1 << new_pos > 0 //not valid rot++;
	//wboard = wboard & 0b0 << old_pos
	//wboard = wboard & 0b1 << new_pos
	wboard = wboard xor 0b1 << (position << move[rot])
	bboard = bboard xor o

	uint8_t translation[64];
	uint8_t validate[] = {
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
			0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
			0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
			0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
			0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
			0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
			0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
			0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	};
	bool continues = validate2d[pointerPos] % (1 << rot) > 0;



	valid[translation[move]] > 0;

	//bool isValidPos = board && (focus << move) = 0;
	unsigned char buffer[1024];*/
}
