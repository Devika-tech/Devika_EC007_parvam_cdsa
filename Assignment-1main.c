#include<stdio.h>
void main()
{

    char value;
    scanf("%c",value);
    if(value>='A' && value<='Z')
        value=value+32;
    else if(value>='a' && value<='z')
        value=value-32;
    printf("VALUE IS:%c",value);
}
