#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    int b;
    double price;
    scanf("%d",&a);
    if(a<=150){
        price=a*0.4463;
        printf("%.1lf",price);
    }else if(a<=400){
        price=150*0.4463+(a-150)*0.4663;
        printf("%.1lf",price);
    }else{
        price=150*0.4463+250*0.4663+(a-400)*0.5663;
        printf("%.1lf",price);
    }
    return 0;
}