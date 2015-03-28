#include "../headers/text_utility.h"

vector<string> TextUtility::split(string& input_string, const char* delimiter) {
  vector<string> split_pieces;
  char* input = (char*) input_string.c_str();
  char* piece = strtok(input, delimiter);
  while (piece != NULL) {
    split_pieces.push_back(piece);
    piece = strtok(NULL, delimiter);
  }

  return split_pieces;
}