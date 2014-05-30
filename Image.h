#ifndef image
#define image

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

class Image
{
private:
	int size, maxColour, width, height;
	string fileName, format;
	vector<int> ascii;


public:
	Image(string fileN);
	void getImage();
	int sizeOfImg();
	int asciiValue(int position);
	int getMaxColour();
	int getWidth();
	int getHeight();
};

#endif
