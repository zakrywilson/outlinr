#include "../headers/file.h"

File::File(string input_file_path) {
  file_path_ = input_file_path;
  ReadAllLines();
}

File::~File() { }

void File::ReadAllLines() {
  //Stores the current line in the buffer
  string current_line;

  //Attempt to create a stream to the passed in file
  ifstream input_file_stream(file_path_.c_str());

  //Confirm the file is open
  if (input_file_stream.is_open())
  {
    //Continue to read until EOF
    while (getline(input_file_stream, current_line))
    {
      content_lines_.push_back(current_line);
    }
    //Close the buffer
    input_file_stream.close();
  }
}

vector<string> File::content_lines() {
  return content_lines_;
}

void File::print() {
  //Print each line in the vector
  for (int i = 0; i < content_lines_.size(); ++i) {
    cout << content_lines_[i] << endl;
  }
}