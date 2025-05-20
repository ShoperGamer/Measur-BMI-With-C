#include <stdio.h> //input/output

int main()
{
    //ประกาศตัวแปร
    float num1;
    float num2;
    float m;
    float BMI;


    printf("Welcome to วัดค่า BMI\n");

    //รับค่าน้ำหนัก
    printf("ใส่ค่าน้ำหนัก(kg): \n");
    scanf("%f",&num1);

    //รับค่าส่วนสูง
    printf("ใส่ค่าส่วนสูง(cm²): \n");
    scanf("%f",&num2);

    //แปลงค่าส่วนสูง (เซนติเมตรเป็นเมตร)
     m = num2 / 100;

    //คำนวณค่า BMI
    BMI = num1 / (m*m);

    //แสดงผล
    printf("ค่า BMI ของคุณ = %.2f\n ",BMI);

    return 0;
}

