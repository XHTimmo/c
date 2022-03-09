#include<stdio.h>
int main(void)
{
    int year;
    int month;
    int M[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d",&year,&month);
    if(year%100==0){
        if(year%400==0){
            if(month==2){
                printf("29");
            }else{
                printf("%d",M[month-1]);
            }
        }else{
            printf("%d",M[month-1]);
        }
    }else if(year%4==0){
        if(month==2){
            printf("29");
        }else{
            printf("%d",M[month-1]);
        }
    }else{
        printf("%d",M[month-1]);
    }
		 
        
    return 0;
}
