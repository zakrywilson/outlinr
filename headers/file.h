#ifndef FILE_H
#define FILE_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class File
{
private:
  string file_path_;
  vector<string> content_lines_;
  void ReadAllLines();
public:
  File(string);
  ~File();
  vector<string> content_lines();
  void print();
};

#endif