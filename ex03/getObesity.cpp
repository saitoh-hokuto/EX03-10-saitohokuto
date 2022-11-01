#include"getObesity.h"

int getObesity(double bmi) {
    const double THIN_BMI = 18.5;
    const double FAT1_BMI = 25.0;
    const double FAT2_BMI = 30.0;
    const double FAT3_BMI = 35.0;
    const double FAT4_BMI = 40.0;
 
    if (bmi < THIN_BMI) {
        return -1;
    }
    else if (bmi < FAT1_BMI) {
        return 0;
    }
    else if (bmi < FAT2_BMI) {
        return 1;
    }
    else if (bmi < FAT3_BMI) {
        return 2;
    }
    else if (bmi < FAT4_BMI) {
        return 3;
    }
    else {
        return 4;
    }
}