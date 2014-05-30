#include "image.h"
#include "gallery.h"
int main(int argc,char *argv[]){
	int numPics = argc - 1;
	const string FORMAT = "P3";
	if(numPics<3){
		cout << "Need more images\n";
		exit(1);
	}
	Gallery images;
	for (int i = 1; i <= numPics; i++)
	{
		string img = argv[i];
		Image pic(img);
		pic.getImage();
		images.getImages(pic);
	}
	vector<int> imageCreate = images.createModeImage();
	ofstream myfile;
  	myfile.open ("filtered.ppm");
  	myfile << FORMAT << endl;
  	for(int i=0;i<imageCreate.size();i++){
  		myfile << imageCreate[i] << " ";
  		//format file nicely
  		if(i%3==0)
  			myfile << endl;
  	}
  	myfile.close();

	return (0);
}
