#include "../headers/text.h"

string filePath;

Text::Text(string inFilePath)
{
	filePath = inFilePath;
}

void Text::display(void)
{
	//Stores the current line in the buffer
	string currentLine;

	//Attempt to create a stream to the passed in file
	ifstream fileIn(filePath.c_str());

	//Confirm the file is open
	if (fileIn.is_open())
	{
		//Continue to read until EOF
		while (getline(fileIn, currentLine))
		{
			//Print the file
			cout << currentLine << endl;
		}
		//Close the buffer
		fileIn.close();
	}
}