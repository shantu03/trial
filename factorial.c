
/*#include<stdio.h>
int fun();
void main()
{
    int a,i;
    printf("Enter no. of factoral you want");
    scanf("%d",&a);
    int b=1;
    fun();
    for(i=1;i<a;++i)
    {
       b=a*i;
       printf("\t %d",b);
    }
    printf("\n Factorial is %d",b);
    getchar();
}
int fun(static int t)
{
    static int a=t;
    a=a*t;
    t--;
    if(t==1)
    {
        return(t);
    }
    fun(t);
}
*/
// using function
#include<stdio.h>
void fun();
void main()
{
    fun();
    getchar();
}
void fun()
{
    extern int a;
    extern int i;
    i=0;
    if(i==0){
    printf("Enter a number ");
    scanf("%d",a);
    i++;
    }
    extern int t;
    t=t*a;
    a--;
    if(a==1)
    {
        printf("\n factorial is %d ",t);
    return;
    }
    fun();

}