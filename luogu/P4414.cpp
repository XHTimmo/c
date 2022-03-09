#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main (void)
{
    int num[3];
    char a,b,c;
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
    }
    //getchar();
    scanf("%c%c%c",&a,&b,&c);
    sort(num,num+3);
    printf("%d %d %d",num[a-'A'],num[b-'A'],num[c-'A']);
    return 0;

}
