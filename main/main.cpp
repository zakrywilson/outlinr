#include "../headers/main.h"

int main(int argc, char const *argv[])
{
  File f(argv[1]);
  vector<string> file_contents = f.content_lines();
  vector<string> testing_vector = TextUtility::split(file_contents, " ");

  TextProcessor textProcessor(testing_vector);
  map<string, int> word_freq = textProcessor.frequency_map();
  map<string, int>::iterator it = word_freq.begin();

  for (it; it != word_freq.end(); it++) {
    cout << it->first << ": " << it->second << endl;
  }

	return 0;
}