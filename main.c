#include <stdio.h>
void main()
{
    int mrk;
    scanf("%d",&mrk);
    if(mrk>=90)
        printf("GRADE A");
    else if(mrk>=80 && mrk<=89)
        printf("GRADE B");
     else if(mrk>=70 && mrk<=79)
        printf("GRADE C");
     else if(mrk>=60 && mrk<=69)
        printf("GRADE D");
     else
            printf("GRADE F");

}
