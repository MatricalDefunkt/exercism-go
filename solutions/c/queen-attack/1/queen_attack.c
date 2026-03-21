#include "queen_attack.h"
#include <stdbool.h>
#include <stdlib.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
  if (!is_valid(queen_1, queen_2))
    return INVALID_POSITION;

  if (is_diagonal(queen_1, queen_2) || is_horizontal(queen_1.row, queen_2.row) || is_vertical(queen_1.column, queen_2.column))
    return CAN_ATTACK;

  return CAN_NOT_ATTACK;
}

bool is_horizontal(uint8_t q1_row, uint8_t q2_row)
{
  return q1_row == q2_row;
}

bool is_vertical(uint8_t q1_col, uint8_t q2_col)
{
  return q1_col == q2_col;
}

bool is_diagonal(position_t q1, position_t q2)
{
  return abs(q1.row - q2.row) == abs(q1.column - q2.column);
}

bool is_valid(position_t q1, position_t q2)
{
  bool on_board = q1.row < 8 && q2.row < 8 && q1.column < 8 && q2.column < 8;
  bool on_different_position = q1.row != q2.row || q1.column != q2.column;
  return on_board && on_different_position;
}