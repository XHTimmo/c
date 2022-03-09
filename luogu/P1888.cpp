#include<bits/stdc++.h>
using namespace std;

int hcf(int a,int b){
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int main(void)
{
    int a[3];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+3);
    int hcf1;
    hcf1=hcf(a[0],a[2]);
    a[0]/=hcf1;
    a[2]/=hcf1;
    printf("%d/%d",a[0],a[2]);
    return 0;
}