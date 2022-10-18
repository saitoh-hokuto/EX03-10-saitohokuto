#include <iostream>
#include<iomanip>
using namespace std;

double getBmi(double height, double weight)
{
    double bmi;
    height /= 100;
    bmi = weight / height / height;
    return bmi;
}

int getObesity(double bmi) {
    int obesity;
    if (bmi < 18.5) {
        obesity = -1;
    }
    else if (bmi < 25) {
        obesity = 0;
    }
    else if (bmi < 30) {
        obesity = 1;
    }
    else if (bmi < 35) {
        obesity = 2;
    }
    else if (bmi < 40) {
        obesity = 3;
    }
    else {
        obesity = 4;
    }
    return obesity;
}

int main()
{
    const int STD_BMI = 22;
    double height;
    double weight;
    double bmi = 0;
    double stdWeight;
    double obesity=0;

    cout << "身長(cm)を入力してください";
    cin >> height;

    cout << "体重(kg)を入力してください";
    cin >> weight;

    stdWeight = STD_BMI * (height/100) * (height/100);

    cout << "あなたのBMIは、" << fixed << setprecision(1) << getBmi(weight, height/100) << "です。" << endl;
    bmi = getObesity(getBmi(height, weight));

    if (obesity == -1) {
        cout << "低体重です" << endl;
    }
    else if (obesity == 0) {
        cout << "通常体重です" << endl;
    }
    else if (obesity == 1) {
        cout << "肥満(１度)です" << endl;
    }
    else if (obesity == 2) {
        cout << "肥満(２度)です" << endl;
    }
    else if (obesity == 3) {
        cout << "肥満(３度)です" << endl;
    }
    else {
        cout << "肥満(４度)です" << endl;
    }

    cout << "あなたの標準体重は、" << stdWeight << "です" << endl;

    int e;
    cin >> e;

    return 0;
}
