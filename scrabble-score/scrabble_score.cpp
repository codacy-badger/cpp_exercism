#include "scrabble_score.h"
#include <iostream>
#include <map>
#include <string>

using std::map;
using std::string;

namespace scrabble_score {
map<char, int> letter_value = {
    {'A', 1}, {'E', 1}, {'I', 1}, {'O', 1},  {'U', 1}, {'L', 1}, {'N', 1},
    {'R', 1}, {'S', 1}, {'T', 1}, {'D', 2},  {'G', 2}, {'B', 3}, {'C', 3},
    {'M', 3}, {'P', 3}, {'F', 4}, {'H', 4},  {'V', 4}, {'W', 4}, {'Y', 4},
    {'K', 5}, {'J', 8}, {'X', 8}, {'Q', 10}, {'Z', 10}};
int score(string const word) {
  int total = 0;
  for (const char& c : word) {
    total = total + letter_value[toupper(c)];
  }
  return total;
}
}  // namespace scrabble_score
