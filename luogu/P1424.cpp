#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int x,n;
    scanf("%d %d",&x,&n);
    int i;
    int d=0;
    for(i=x;i<x+n;i++)
    {
        if(i%7==6||i%7==0)
        {
            d+=0;
        }else{
        	d+=250;
		}
    }
    printf("%d",d);
    return 0;
}
