#include "../headers/text.h"

int main(int argc, char const *argv[])
{
	string filePath = argv[1];
	Text t(filePath);	
	t.display();
	return 0;
}