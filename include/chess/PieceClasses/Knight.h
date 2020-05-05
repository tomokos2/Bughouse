//
// Created by tomok on 4/19/2020.
//

#ifndef FINALPROJECT_KNIGHT_H
#define FINALPROJECT_KNIGHT_H

#include "chess/Piece.h"

namespace chess {
  
 class Knight : public Piece {
   
   bool is_white_;

   bool is_pawn_;
   
 public:
   explicit Knight(bool is_white, bool is_pawn);

   bool IsLegalMove(std::pair<Location, Location> turn) override;

   bool GetIsWhite() override { return is_white_; }

   PieceType GetPieceType() override { return KNIGHT; }

   bool IsPawn() override { return is_pawn_; }

   void Reset() override { }

   std::vector<Location> GetPath(std::pair<Location, Location> turn) override;

   void DoTurn() override {}
 };
 
}
#endif //FINALPROJECT_KNIGHT_H
