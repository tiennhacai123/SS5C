#include <stdio.h>
int main(){
    float revenue,tip_money;
    printf("Nhap doanh thu ban hang:");
    scanf("%f",&revenue);
    if(revenue<=100000000){
        tip_money = revenue*0.05;
        printf("Tien hoa hong la: %.1f",tip_money);
    }else if(revenue<=300000000){
        tip_money= revenue*0.1;
        printf("Tien hoa hong la: %.1f",tip_money);
    }else{
        tip_money = revenue*0.2;
        printf("Tien hoa hong la: %.1f",tip_money);
    }     

}