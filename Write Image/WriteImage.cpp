#include <opencv2/opencv.hpp>

#include <stdio.h>

using namespace cv;

int main(int argc, char** argv)

{

if (argc != 2) {

printf("usage: DisplayImage.out <Image_Path>\n");

return -1;

}

Mat image;

image = imread(argv[1], 1);

if (!image.data) {

printf("No image data \n");

return -1;

}



imwrite("Image_Out.jpg", image);


return 0;

}