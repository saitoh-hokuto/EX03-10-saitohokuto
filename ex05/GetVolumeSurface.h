#pragma once
struct BOX {	// Ìè`
	double x;	//
	double y;	//³
	double z;	//s
	double volume;	//ÌÏ
	double surface; //\ÊÏ
	double packSize; //êéî}ÖTCY
}; 
void getVolumeSurface(BOX* box);
//î}Ö»èÖ
bool isSendable( 
	BOX* box	//BOXÌ|C^
	);

