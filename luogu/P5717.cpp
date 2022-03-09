#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
using namespace std;
int main(void)
{
    int a[3];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+3);
    if(a[0]+a[1]<=a[2]){
        printf("Not triangle\n");
    }else{
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
            printf("Right triangle\n");
        }
        if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2]){
            printf("Acute triangle\n");
        }
        if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2]){
            printf("Obtuse triangle\n");
        }
        if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2]){
            printf("Isosceles triangle\n");
        }
        if(a[0]==a[1]&&a[0]==a[2]&&a[1]==a[2]){
            printf("Equilateral triangle\n");
        }
    }
    
    return 0;
}
