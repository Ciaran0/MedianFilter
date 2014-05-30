#include "image.h"

/**
*Constructor
*/
Image::Image(string fileN){
	fileName = fileN;
}
/**
*get information on image from file
*/
void Image::getImage(){
	ifstream inStream;
	inStream.open(fileName.c_str());
	if(inStream.fail())
	{
		cout << "Input file opening failed. \n";
		exit(1);
	}
	if(inStream.good())
  	{
    	
    	getline(inStream, format);
    	if(format.compare("P3") != 0){
    		cout << "Image not the right format. \n";
    		exit(1);
    	}
    	inStream >> width;
    	inStream >> height;
    	inStream >> maxColour;
    	int temp;
        //pixel = R G B 
        size = (width * height)*3;
    	while(inStream >> temp ){
    		ascii.push_back(temp);
  		}
  	} 
	inStream.close();
}
/**
*@returns the value at the position in the image
*/
int Image::asciiValue(int position){
	return ascii[position];
}
/**
*@returns the size of the image
*/
int Image::sizeOfImg(){
	return size;
}
/**
*@returns the maxColour
*/
int Image::getMaxColour(){
    return maxColour;
}
/**
*@returns the width
*/
int Image::getWidth(){
    return width;
}
/**
*@returns the height
*/
int Image::getHeight(){
    return height;
}

