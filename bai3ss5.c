#include<stdio.h>
int main(){
    int minute, phone_charges;
    printf("Nhap vao so phut su dung:");
    scanf("%d",&minute);
    if(minute>=1&&minute<=50){
    printf("So tien dien thoai trong %d phut la %d",minute,25000+600*minute);
    }else if(minute>=51&&minute<=200){
        printf("So tien dien thoai trong %d phut la %d",minute,25000+((minute-50)*400+50*600));
    }else if(minute>=201&&minute<=400){
        printf("So tien dien thoai trong %d phut la %d",minute,25000+(((minute-200)*200+50*600+150*400)));
    }else{
       printf("So tien dien thoai trong %d phut la %d",minute,25000+(((minute-400)*100+50*600+150*400+200*200)));

    }
}