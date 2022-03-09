#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i;
    int a,b;
    int num[7];
    int flag=0;
    int day=0,value=0;
    for ( i = 0; i < 7; i++)
    {
        scanf("%d %d",&a,&b);
        num[i]=a+b;
        if(value<num[i])
        {
            value=num[i];
            day=i+1;
        }
        if(num[i]>8)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("0\n");
    }else{
        printf("%d",day);
    }
    return 0;

    
}