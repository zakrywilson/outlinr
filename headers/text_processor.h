#ifndef TEXT_PROCESSOR_H
#define TEXT_PROCESSOR_H

#include <map>
#include <string>
#include <vector>

using namespace std;

class TextProcessor {
private:
  vector<string> words_;
  map<string, int> frequency_map_;
  void get_frequency();
public:
  TextProcessor(vector<string>& words);
  map<string, int> frequency_map();
};

#endif