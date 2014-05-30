#include "gallery.h"

/**
*Constructor
*/
Gallery::Gallery(){}
void Gallery::getImages(Image pic){
	pictures.push_back(pic);
}
/**
*creates pixels for new image
*uses median filter
*@returns the filtered image
*/
vector<int> Gallery::createModeImage(){
	vector<int> image2;

	image2.push_back(pictures[0].getWidth());
	image2.push_back(pictures[0].getHeight());
	image2.push_back(pictures[0].getMaxColour());
	
	for(long i =0;i<pictures[0].sizeOfImg();i++){
		vector<int> mode;
		for(int j=0;j<pictures.size();j++){
			mode.push_back(pictures[j].asciiValue(i));
		}
	    sort (mode.begin(), mode.begin()+mode.size());
	 
		//put into vector for new image
		image2.push_back(mode[(int)(mode.size()/2)]);
	}


	return image2;
}
