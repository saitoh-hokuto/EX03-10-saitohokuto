#include <iostream>
#include<iomanip>
#include"getBmi.h"
#include"getObesity.h"
using namespace std;

int main()
{
    const int STD_BMI = 22;
    double height;
    double weight;
    double bmi = 0;
    double stdWeight;

    cout << "身長(cm)を入力してください";
    cin >> height;

    cout << "体重(kg)を入力してください";
    cin >> weight;

    stdWeight = STD_BMI * (height / 100) * (height / 100);

    bmi = getBmi(height, weight)

        ; cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;
    cout << "あなたの標準体重は、" << stdWeight << "です" << endl;


    switch (getObesity(bmi))
    {
    case -1:
        cout << "あなたは低体重です。";
        break;

    case 0:
        cout << "あなたは普通体重です。";
        break;

    case 1:
        cout << "あなたは肥満(1度)です。";
        break;

    case 2:
        cout << "あなたは肥満(2度)です。";
        break;

    case 3:
        cout << "あなたは肥満(3度)です。";
        break;

    case 4:
        cout << "あなたは肥満(4度)です。";
        break;

    default:
        break;
    }


    int e;
    cin >> e;

    return 0;
}
