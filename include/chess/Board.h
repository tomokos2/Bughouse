//
// Created by tomok on 4/19/2020.
//

#ifndef FINALPROJECT_BOARD_H
#define FINALPROJECT_BOARD_H


#include "Piece.h"

namespace chess {
  const int kBoardSize = 8;
  
class Board {

public:
  Board();
  Piece* GetPieceAtLoc(int x, int y);
  void MovePiece(int start, int end);
  
private:
  Piece* board_[kBoardSize][kBoardSize];
};  
}

#endif //FINALPROJECT_BOARD_H
