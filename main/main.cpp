#include "../headers/main.h"

int main(int argc, char const *argv[])
{
  string testing = "here is a test";
  vector<string> testing_vector = TextUtility::split(testing, " ");

  for (int i = 0; i < testing_vector.size(); ++i) {
    cout << testing_vector[i] << endl;
  }
	return 0;
}