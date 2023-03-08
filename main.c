#include <stdio.h>
#include <stdlib.h>
int toplam (int,int);
int toplam(int a,int b)
{
    return a+b;
}
void main()
{
    int a,b;
    printf("iki sayisi yaz!\n");
    scanf("%d%d",&a,&b);
    printf("toplam%d\n",toplam(a,b));
    if(a+b==7 || a+b==11)

        printf("kazandin");

    else if(a+b==3 || a+b==2 || a+b==12)

        printf("kaybettin");


    else(a+b==4 || a+b==5 || a+b==6 || a+b==8 || a+b==9 || a+b==10);
        printf("bir puan aldin");

}
