#include <stdio.h>        //comments = step by step proccess
int india()//12
{
    printf("i am in india\n");//13
     return 0; //14
}
int japan()//9
{
    printf("i AM IN japan\n");//10
    india();//11
     return 0; //15
}
int canada()//6
{

    printf("i am in canada\n");//7
    japan();//8
     return 0; //16
}
int dev()//2
{
    printf("hello dev\n");//3
    printf("how are you\n");//4
    canada();//5
 return 0; //17
}
int main()
{
    dev();//1  calling function dev
    return 0;//18
}