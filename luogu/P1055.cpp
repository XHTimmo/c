#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num1,num2,num3;
    char a;
    scanf("%d%c%d%c%d%c%c",&num1,&a,&num2,&a,&num3,&a,&a);
   
    int num[9];
    num[0]=num1;
    //printf("num2=%d\n",num2);
    num[1]=num2/100;
    //printf("%d\n",num[1]);
    num2=num2%100;
    num[2]=num2/10;
    //printf("%d\n",num[2]);
    num2%=10;
    num[3]=num2;
    num[4]=num3/10000;
    num3%=10000;
    num[5]=num3/1000;
    num3%=1000;
    num[6]=num3/100;
    num3%=100;
    num[7]=num3/10;
    num3%=10;
    num[8]=num3;
    int i;
    int b=0;
//    for(i=0;i<9;i++)
//    {
//        printf("%d",num[i]);
//    }
//    printf("/n");
    for(i=0;i<9;i++)
    {
        b+=num[i]*(i+1);
    }
//    printf("b=%d\n",b);
    b=b%11;
    char aa;
    if(b==10)
    {
        aa='X';
    }else{
        aa=b+48;
    }
//	printf("b=%d\n",b);
//    printf("aa=%c\n",aa);
    if(a==aa)
    {
        printf("Right");
    }else{
        printf("%d-%d%d%d-%d%d%d%d%d-%c",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],aa);
    }

     return 0;
    
}
