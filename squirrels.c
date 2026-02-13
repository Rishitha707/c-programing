#include <stdio.h>
int main() {
    int cigars,weekend;
    printf("Enter the No. of cigars:\n");
    scanf("%d",&cigars);
printf("Enter 1 for weekend \t 0 for not weekend");
scanf("%d",&weekend);
if(weekend)
{
    if(cigars>=40)
{
printf("true");
}
else
{
    printf("false");
}
}
else
{
    if(cigars>=40&&cigars<=60)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
return 0;
}