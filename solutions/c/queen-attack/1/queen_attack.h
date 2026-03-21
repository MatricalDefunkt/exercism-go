#ifndef QUEEN_ATTACK_H
#define QUEEN_ATTACK_H

#include <stdint.h>
#include <stdbool.h>

typedef enum
{
   CAN_NOT_ATTACK,
   CAN_ATTACK,
   INVALID_POSITION
} attack_status_t;

typedef struct
{
   uint8_t row;
   uint8_t column;
} position_t;

attack_status_t can_attack(position_t queen_1, position_t queen_2);

bool is_horizontal(uint8_t q1_row, uint8_t q2_row);
bool is_vertical(uint8_t q1_col, uint8_t q2_col);
bool is_diagonal(position_t q1, position_t q2);
bool is_valid(position_t q1, position_t q2);

#endif
