#ifndef gallery
#define gallery

#include "image.h"

class Gallery
{
private:
	vector<Image> pictures;


public:
	Gallery();
	void getImages(Image pic);
	vector<int> createModeImage();

};

#endif
