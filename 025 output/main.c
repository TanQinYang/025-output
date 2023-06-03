#include <stdio.h>
#include <stdlib.h>

int main()
{
 int array[3]={5,2,0};
 int i=0;
 int ex=0;
 if (array[i]>array[i+1])
{
    ex=array[i];
    array[i]=array[i+1];
    array[i+1]=ex;
}
 else if (array[i]>array[i+2])
{

    ex=array[i];
    array[i]=array[i+2];
    array[i+1]=ex;
}
int a=1;
 if (array[a]>array[a+1])
 {
    ex=array[a];
    array[a]=array[a+1];
    array[a+1]=ex;
    }
int x;
for(x=0;x<3;x++)
    printf("%d",array[x]);
    return 0;
}
