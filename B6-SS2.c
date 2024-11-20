#include<stdio.h>
int main(){
    // khai bao hang so PI va ban kinh hinh tron
    int banKinh = 5;
    const float PI = 3.14 ;
    //tinh chu vi hinh tron
    float chuVi = 2 * banKinh * PI;
    printf("Chu vi hinh tron la %f", chuVi); 
    // tinh dien tich hinh tron
    float dienTich = PI * banKinh * banKinh ;
    printf("\nDien tich hinh trong la %f", dienTich);
    return 0;
}