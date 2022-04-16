#ifndef BOARD_HPP
#define BOARD_HPP

#include "piece.hpp"
#include <array>

constexpr static std::array<char, 64> initBoard{{
	'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
	'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',
	'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R',
}};

struct Board {
	std::array<char, 64> board{initBoard};
};

#endif // BOARD_HPP
