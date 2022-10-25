#include "GetVolumeSurface.h"
void getVolumeSurface(BOX* box) {
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->x * box->z + box->y * box->z);
	return;
}
bool isSendable(BOX* box)
{
	box->packSize = -1;
	double baggage = box->x + box->y + box->z;
	const int criteria_size = 8;
	double packSize[criteria_size] = { 60,80,100,120,140,160,180,200 };

	for (int i = 0; i < criteria_size; i++) {
		if (baggage <= packSize[i]) {
			box->packSize = packSize[i];
			return true;
		}
	}
	return true;
}
