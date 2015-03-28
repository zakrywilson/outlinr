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

vector<string> TextUtility::split(vector<string>& input_strings, const char* delimiter) {
  vector<string> split_pieces;
  for (int i = 0; i < input_strings.size(); ++i) {
    char* input = (char*) input_strings[i].c_str();
    char* piece = strtok(input, delimiter);
    while (piece != NULL) {
      split_pieces.push_back(piece);
      piece = strtok(NULL, delimiter);
    }
  }
  
  return split_pieces;
}