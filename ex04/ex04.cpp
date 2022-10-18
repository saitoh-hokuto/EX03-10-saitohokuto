#include <iostream>
using namespace std;

void VolumeSurface(double, double, double, double&, double&);

int main() {
	double width, height, depth,volume,surface;
	cout << "幅を入力:"<<endl;
	cin >> width;
	cout << "高さを入力:" << endl;
	cin >> height;
	cout << "奥行を入力:" << endl;
	cin >> depth;
	VolumeSurface(width, height, depth,volume,surface);
	cout << "体積は" << volume << endl << "表面積は" << surface << endl;

	int e;
	cin >> e;

	return 0;
}

void VolumeSurface(double width, double height, double depth, double &volume, double &surface){
	volume = width * height * depth;
	surface = (width * height + width * depth + height * depth) * 2;
}