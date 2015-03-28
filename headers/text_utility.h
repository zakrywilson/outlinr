#ifndef TEXT_UTILITY_H
#define TEXT_UTILITY_H

#include <cstring>
#include <string>
#include <vector>

using namespace std;

class TextUtility
{
public:
  TextUtility();
  ~TextUtility();
  static vector<string> split(string& input_string, const char* delimiter);
};

#endif