#include<bits/stdc++.h>
using namespace std;
struct pen
{
    int mount;
    int price;
};
int main (void)
{
    struct  pen pen[3];
    int mount=0;
    scanf("%d",&mount);
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d %d",&pen[i].mount,&pen[i].price);
    }
    int price[3];
    for(i=0;i<3;i++)
    {
        price[i]=ceil(double(mount)*1.0/pen[i].mount)*pen[i].price;
    }
    sort(price,price+3);
    printf("%d",price[0]);
    return 0;
   
    
}
