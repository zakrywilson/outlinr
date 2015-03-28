#include "../headers/text_processor.h"

TextProcessor::TextProcessor(vector<string>& words) {
  words_ = words;
  get_frequency();
}

void TextProcessor::get_frequency() {
  for (int i = 0; i < words_.size(); ++i) {
    if (frequency_map_.count(words_[i]) == 0) {
      frequency_map_[words_[i]] = 1;
    }
    else if (frequency_map_.count(words_[i]) > 0) {
      ++frequency_map_[words_[i]];
    }
  }
}

map<string, int> TextProcessor::frequency_map() {
  return frequency_map_;
}