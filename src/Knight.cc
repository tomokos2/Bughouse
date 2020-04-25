//
// Created by tomok on 4/19/2020.
//

#include "chess/PieceClasses/Knight.h"

namespace chess {

  Knight::Knight(bool is_white, bool is_pawn)
    : is_white_(is_white),
      is_pawn_{is_pawn} {}

  bool Knight::IsLegalMove(int start_x, int start_y, int end_x, int end_y) {
    return false;
  }

}