#include<stdio.h>
using namespace std;
void pecahan ();
main()
{

    pecahan();

}
void pecahan()
{
    int a,b,i,t;
    printf("== menyederhanakan bilangan pecahan ==\n\n");
    printf(" masukan pembilangan : ");
    scanf ("%d",&a);
    printf("masukan penyebut : ");
    scanf ("%d",&b);
    t=a/b;
    i=a%b;
    if (a%b==0)
        printf (" bilangan (%d/%d)\n Disederhanakan menjadi %d",a,b,t);
    else if (a%b !=0)
        printf (" bilangan (%d/%d)\n Disederhanakan menjadi (%d/%d)",a,b,t,i,b);

}
