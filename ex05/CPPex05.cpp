#include <iostream>
using namespace std;
#include "getVolumeSurface.h"

int main()
{
	const int BoxCount = 3;
	BOX boxes[BoxCount];
	BOX testBox = {2,10,30};
	for (int i = 0; i < BoxCount; i++) {
		cout << "������́F";
		cin >> boxes[i].x;
		cout << "��������́F";
		cin >> boxes[i].y;
		cout << "���s����́F";
		cin >> boxes[i].z;
		getVolumeSurface(&boxes[i]);
		cout << "�̐ς�" << boxes[i].volume << endl;
		cout << "�\�ʐς�" << boxes[i].surface << endl;
		if (isSendable(&boxes[i])) {
			cout << "��}�փT�C�Y��" << boxes[i].packSize <<"�ő���܂�"<< endl;
		}
		else {
			cout << "��}�ւł͑���܂���" << endl;
		}
		//testa
	}
	int e;
	cin >> e;

	return 0;
}