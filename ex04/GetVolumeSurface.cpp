#include"GetVolumeSurface.h"

void VolumeSurface(double width, double height, double depth, double& volume, double& surface) {
	volume = width * height * depth;
	surface = (width * height + width * depth + height * depth) * 2;
}