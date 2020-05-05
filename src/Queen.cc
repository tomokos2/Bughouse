//
// Created by tomok on 4/19/2020.
//
#include "chess/PieceClasses/Queen.h"
#include <chess/PieceClasses/Rook.h>
#include <chess/PieceClasses/Bishop.h>


namespace chess {
  Queen::Queen(bool is_white, bool is_pawn)
    : is_white_(is_white),
      is_pawn_{is_pawn} {}

  bool Queen::IsLegalMove(std::pair<Location, Location> turn) {
    Rook rook(is_white_, false);
    Bishop bishop(is_white_, false);
    return rook.IsLegalMove(turn) || bishop.IsLegalMove(turn);
  }


  std::vector<Location> Queen::GetPath(std::pair<Location, Location> turn) {
    Rook rook(is_white_, false);
    Bishop bishop(is_white_, false);
    if (rook.IsLegalMove(turn)) {
      return rook.GetPath(turn);
    } else {
      return bishop.GetPath(turn);
    }
  }

}